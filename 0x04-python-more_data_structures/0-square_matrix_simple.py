#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    """
    wordA function that computes the square
    value of all integers of a matrix.
    """
    new_mat = []
    for row in matrix:
        res = list(map(lambda x: x**2, row))
        new_mat.append(res)
    return new_mat
