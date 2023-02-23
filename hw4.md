# Homework 4 

Due Friday March 3. 

## Digit Frequency (5 points)
Write a program that counts the number of times a digit occurs 
in an integer. For example, given the integer `224498344` the program might
output a table:

```
Digit    Frequency
-----    ---------
0        0
1        0 
2        2
3        1
4        4
5        0
6        0
7        0
8        1
9        1
```

Write a function `digit_freq` (in both C and assembly) that takes an integer
and an array of integers.  When the function is complete the $i_{th}$ entry in 
array should be the frequency of digit `i`. For example, in the example above the 
array would look like:

|index = | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|--------|---|---|---|---|---|---|---|---|---|---|
|value = | 0 | 0 | 2 | 1 | 4 | 0 | 0 | 0 | 1 | 1 |


```
// digit_freq.h
extern void digit_freq(int n, int freq[]);
```

Write a main function in `main_df.c` that takes an integer command 
line argument and prints out the digit frequency in a nicely formatted 
table (like above).


## Fast Exponentiation (5 points)

Consider the following recursive definition for computing $x^y$.

$$
x^y = 
\begin{cases} 
      (x^{y/2})^2 & \text{if $y$ is even}  \\
      x\cdot x^{y-1} & \text{if $y$ is odd} \\ 
      1 & \text{if $y = 0$}
\end{cases}
$$

In the first two cases $x^{y}$ is defined in terms of computing 
$x^{y^\prime}$ where $y^\prime < y$.  The base case is when $y$ is $0$.

Write a function `pow(x,y)` in both C and assembly and uses the recursive i
algorithm above to compute $x^y$. Make sure your functions are 
recursive and not iterative (that is, using loops). Create functions 
`pow.c`, a header file, and `main_pow.c`. The main function should 
take $x$ and $y$ as command line arguments.
 

## What to turn in

1. Create a directory `hw4`
2. Turn in files `digit_freq.c`, `digit_freq.s`, `digit_freq.h`, and `main_df.c`
3. Turn in files `pow.c`, `pow.s`, `pow.h`, and `main_pow.c`
4. push all of your files to your course repo.

