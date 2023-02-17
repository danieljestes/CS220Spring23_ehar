# Homework 3 

## Day of the Week (5 points)
Create a directory named `hw3`. Finish the day of week fuction by 
converting the following C function into assembly language. Put the function in 
a file named `dow.s`.  Include a header file `dow.h`.

```
#include "dow.h"

/*
 *  y0 = y - (14 - m)/12
 *  x = y0 + y0/4 - y0/100 + y0/400
 *  m0 = m + 12 * ((14 - m) / 12) - 2
 *  d0 = (d + x + (31 * m0) / 12) % 7
 *
 *  On which day did Feb 14, 2000 fall?
 *
 *  y0 = 2000 - 1 = 1999
 *  x = 1999 + 1999 / 4 - 1999 / 100 + 1999 / 400 = 2483
 *  m0 = 2 + 12(1) - 2 = 12
 *  d0 = (14 + 2483 + (31*12)/12) % 7 = 2528 % 7 = 1 (Monday)
 */

int dow(int m, int d, int y) {
    int y0 = y - (14 - m) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = m + 12 * ((14 - m)/12) - 2;
    int d0 = (d + x + (31 * m0) / 12) % 7;
    return d0;
}
```


Write a main function in `main_dow.c` that takes the month, day,
and year as command line arguments and calls the assembly version of
`dow` and prints the day of the week. For example, if the
executable was named `dow` then ...  

```
dow 2 14 2000 
Monday
```

## Sum 3 or 5 (5 points)
Write the function `sum3or5` from homework 1 as an assembly 
language function. Put this in a file named `sum3or5.s` 

Write a main program in a file named `main35.c` that takes the integer
`n` as a command line argument.  If the executable were named sum3or5 
then  

```
sum3or5 1000
233168 
```

For both functions, verify that the correct number of command line
arguments was passed an issue a user friendly error message.
