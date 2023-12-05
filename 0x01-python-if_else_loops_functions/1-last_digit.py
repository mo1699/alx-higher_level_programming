#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
N = abc(number) % 10
if number < 0:
    N = -N

if N > 5:
    print(f"Last digit of {number:d} is {N:d} and is greater than 5")
elif N == 0:
    print(f"Last digit of {number:d} is {N:d} and is 0")
else:
    print(f"Last digit of {number:d} is {N:d} and is less than 6 and not 0")
