#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

def staircase(n):
    # Write your code here
    m = 1
    while n > 0:
        print ((n - 1) * ' ', end='')
        print (m * '#')
        n -= 1
        m += 1
        

if __name__ == '__main__':
    n = int(input().strip())

    staircase(n)
