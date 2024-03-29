#!/usr/bin/python3


def best_score(a_dictionary):
    """
    A function that returns a key with the biggest integer value.
    """
    if a_dictionary is None:
        return None
    maxV = 0
    maxK = None
    for k, v in a_dictionary.items():
        if v > maxV:
            maxV = v
            maxK = k
    return maxK
