#include <stdio.h>
#include "upper.h"

int main() {

    char t[] = "Hello";

    upper(t);
    printf("%s\n", t);   // should print HELLO

    // string constant placed in ROM - read only memory
    // modify a constant
    // upper("Apple Sauce");

    
    // WATCHOUT! Not null terminated
    char u[] = { 'H', 'e', 'l', 'l', 'o'};
    upper(u);
    printf("%s\n", u);
}
