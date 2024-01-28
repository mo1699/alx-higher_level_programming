#!/usr/bin/python3


def search_replace(my_list, search, replace):
    """
    A function that replaces all occurrences
    of an element by another in a new list
    """
    return list(map(lambda i: replace if i == search else i, my_list))
