#!/usr/bin/python3
for i in range(0, 10):
    for e in range(i + 1, 10):
        if digit1 == 8 and digit2 == 9:
            print("{}{}".format(i, e))
        else:
            print("{}{}".format(i, e), end=", ")
