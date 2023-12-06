#!/usr/bin/python3
"""Print the numbers from 1 to 100 separated by a space.
  For multiples of three, print Fizz instead of the number
  For multiples of five, print Buzz instead of the number.
  For multiples of three and five, print FizzBuzz instead of the number.
  """


def fizzbuzz():
    for i in range(1, 101):
        N = i % 3
        if N == 0 and N == 0:
            print("FizzBuzz ", end="")
        elif N == 0:
            print("Fizz ", end="")
        elif N == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(i), end="")
