.text
.syntax unified

f:
  add r3, r4, r0, lsl #2
  add r3, r4, r0
  add r4, r2, #99
  adds r4, r2, #255
  eorslt r1,r8,#62
  sub r1, r2, r3, asr #2
  addsge r1, sp, #254
