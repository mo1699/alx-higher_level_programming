#!/usr/bin/python3
"""Defines an inherited class-checking function."""


def inherits_from(obj, a_class):
    """Checks if an object is an inherited instance of a class."""
    return isinstance(obj, a_class) and type(obj) != a_class
