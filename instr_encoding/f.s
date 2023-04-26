/*
int f(int x) {
    if (x % 8 == 0)
        x++;

    return x;
}
*/
.syntax unified // use the modern syntax
.text
f:
  and r1, r0, #7
  cmp r1, #0
  bne return
  add r0, r0, #1
return:
  bx lr
