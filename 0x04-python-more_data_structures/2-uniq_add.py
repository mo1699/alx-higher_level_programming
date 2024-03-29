#!/usr/bin/python3


def uniq_add(my_list=[]):

    """
    A function that adds all unique
    integers in a list (only once for each integer)
    """

    my_list.sort()
    sum = 0
    prev = None
    for i in my_list:
        if i != prev:
            sum += i
            prev = i
    return sum
