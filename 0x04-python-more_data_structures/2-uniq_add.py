#!/usr/bin/python3


def uniq_add(my_list=[]):
    """
    A function that adds all unique
    integers in a list (only once for each integer)
    """
    my_list.sort()
    sum = 0
    prev_num = None

    for num in my_list:
        if num != prev_num:
            sum += num
            prev_num = num

    return summ
