# Homework 5

Due Monday May 1 by the start of class at 9:20AM. This is a written 
assignment. Turn it in neat and stapled.  

## Instruction Set Details

1. Convert, by hand, the assembly instruction `addsge r1, sp, #254` to its
32 bit ARM instruction encoding.  Be clear and neat, and explain every 
portion of the 32 bit encoding.  Check your work with `objdump` but do not
use that to determine the encoding. You will not be able to use `objdump` 
on the final exam. 

2. What assembly instruciton corresponds to the encoding `b0130594`.
Explain every portion of the instruction format and describe the process
you went through to decode the instruction beginning at the web page

https://developer.arm.com/documentation/ddi0406/c/Application-Level-Architecture/ARM-Instruction-Set-Encoding/ARM-instruction-set-encoding 


```
int sum(int vec[], int n) {
    int sum = 0;
    int i = 0;

    while (i < n)
        sum = sum + vec[i++];

    return sum;
}
```

```

sum:
    str r4, [sp,#-4]
    str r5, [sp,#-8]
    sub sp, sp, #8
    mov r2, #0   // sum = 0
    mov r3, #0   // i = 0

while:
    cmp r3, r1
    bge endwhile
    lsl r4, r3, #2  // 4 * i
    add r4, r0, r4  // vec + 4i
    ldr r5, [r4]    // r4 = vec[i]
    add r2, r2, r5  // sum = sum + r4
    add r3, r3, #1  // i = i + 1
    b while

endwhile:
    mov r0, r2
    ldr r5, [sp, #8]
    ldr r4, [sp, #4]
    add sp, sp, #8
    bx lr
``` 


