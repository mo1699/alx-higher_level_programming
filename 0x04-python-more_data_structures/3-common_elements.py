#!/usr/bin/python3


def common_elements(set_1, set_2):
    """
    A function that returns a set of
    common elements in two sets
    """

    listss = []

    for i in set_1:
        for j in set_2:
            if i == j:
                listss.append(i)
            else:
                continue
    return listss
