# Homework 2 (10 points)

Due Monday February 5th by the start of class at 9:20AM.

Create a directory named `hw2`. Write a function `int2hex` in a file named `int2hex.c`. `int2hex` takes an unsigned integer `n` and converts `n` to hexadecimal. The hexadecimal value returned is a string and is returned through an array of characters.

```
/*
 * n - integer being converted
 * buff - the string that will hold the result. buff must be 
 *        big enough to hold the result. 
 */
void int2hex(unsigned int n, char buff[]);
```

Write a `main.c` file that prompts the user to enter an integer and then displays the hexadecimal value. Here is an example run of my program.

```
Enter an int: 4275878552
0xFEDCBA98
Enter an int: 2309737967
0x89ABCDEF
Enter an int: 4294967295
0xFFFFFFFF
Enter an int: 3735928559
0xDEADBEEF
Enter an int: ^C
ehar@raspberrypi:~/ehar_CS220/hw2 $
```

1. Full credit if you figure out how to use the bitwise operators `&` and `>>` instead of `%` and `/`.

2. The algorithm should be similar the one we wrote for converting decimal to binary. Do not try and take a shortcut by using `printf` with a `%x` format specifier. Remember, the `int2hex` function must store the result in the `buff` parameter passed to it, and not print anything.

3. Don't google around for solutions.  That's not the point of trying to learn to code.




 