#!/usr/bin/python3

# Take a floating point number < 1 and
# return a string of bits
def dec2bin(f : float) -> str: 
   r = ""

   # 64 bits in a double
   for i in range(64): 
        f = f * 2

        if f > 1:
            f = f - 1
            r = r + '1'
        else:
            r = r + '0'

   return r

# main program
if __name__ == "__main__":
   import sys 
   print(dec2bin(float(sys.argv[1])))
