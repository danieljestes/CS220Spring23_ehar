# Homework 5

Due Friday April 7 by the start of class at 9:20AM. 

## Euler's Number and Computing $e^x$

Euler's number is the mathematical constant $e = 2.71828...$, and, like $\pi$, is an irrational number (i.e., goes on forever without repeating). $e$ arises in nature in various contexts, such as exponential growth and decay. In C, the function `exp(x)` computes $e^x$ where `x` is a real number (`double`). There is a beautiful formula for approximating $e^x$.

$$
e^x = \sum_{k=0}^{\infty}x^k/k! = x^0/0! + x^1/1! + x^2/2! + \cdots + x^k/k! + \cdots
$$

Calculus students might recognize this as the Taylor series expansion of $e^x$. The notation $k!$ is read $k$-factorial
and is $k\cdot(k-1)\cdot(k-2) \cdots 2\cdot 1$. By definition $0! = 1$.

Write the function in both C (`exp.c`) and ARM assembly (`exp.s`) that both implement the function declaration...

```
// exp.h
extern double myexp(double x);
```

Your function should be written such that it does not call 
any other C library functions. In particular do not call the 
C library function `pow` (or `exp` obviously) function. Also, there is no need to create or use a factorial function. In the loop that computes the sum, build up powers and factorials _as you go_. 

Also, your loop cannot run an infinite number of times (as the 
summation notation suggests). Hint: there is a 
point at which $k!$ will not fit into a thirty-two bit signed integer.  
What value of $k$ is that? That value of $k$ then, will be the natural 
limit on the number of 
terms you should calculate out to.

Write a `main` function in `main.c` that takes a double command 
line argument and prints the value of $e^x$.

Do not use the `-S` compiler flag when writing `exp.s`. The C compiler will generate code we have not covered in class and is easily detectable.

## Converting between integers and floating-point 

You can use the `vmov` function to copy the bits of an 
integer register to a floating-point register. For example, `vmov s2, r0` copies the 
raw bits in `r0` to the thirty-two bit floating-point register `s0`. 
It does not convert an integer to its floating-point 
equivaliant. That is, it will not convert the integer `1` 
to the floating-point value `1.0`.

To actually do the conversion you use the instruction

```
vcvt.f64.s32 d0,s2
```

This converts a signed thirty-two bit number in `s2` to a double precision number and put in `d0`. The `s32` indicates that the source register should be interpreted as a signed thirty-two bit number. The `f64` indicates that the destination
register is double precision.


## What to turn in

1. Create a directory `hw5`
3. Turn in files `main.c`, `exp.s`, `exp.h`, and `exp.c`
4. Push all of your files to your course repo.

