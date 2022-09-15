#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    arr.sort()
    minsum = sum(arr[:4])
    maxsum = sum(arr[1:])
    print(minsum, maxsum)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
