# Homework 4 

Due Friday April 7 by the start of class at 9:20AM. 

## Euler's Number and Computing $e^x$

Euler's number is a mathematical constant $e = 2.71828...$, and, like $\pi$, is an irrational number (i.e., goes on forever without repeating). $e$ arises in nature in various contexts, such as exponential growth and decay. In C, the function `exp(x)` computes $e^x$ where `x` is a real number (`double`).

Most programming languages provide a function `exp(x)` for computing $e^x$. There is a beautiful formula for approximating $e^x$.

$$
e^x = \sum_{k=0}^{\infty}x^k/k!
$$

```
// exp.h
extern double exp(double x);
```

Write a main function in `main.c` that takes a double command 
line argument and prints the value of $e^x$.

## What to turn in

1. Create a directory `hw4`
2. Turn in files `digit_freq.c`, `digit_freq.s`, `digit_freq.h`, and `main_df.c`
3. Turn in files `ipow.c`, `ipow.s`, `ipow.h`, and `main_ipow.c`
4. push all of your files to your course repo.

