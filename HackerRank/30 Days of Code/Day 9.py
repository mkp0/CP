import os
import math
import random
import re
import sys

def factorial(a):
    if a == 0 or a == 1:
        return a
    else:
        return a * factorial(a - 1)
        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'],'w')
    n = int(input())
    result = factorial(n)
    fptr.write(str(result) + '\n')
    fptr.close()