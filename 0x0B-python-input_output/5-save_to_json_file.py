#!/usr/bin/python3
"""Defines a JSON file-writing function."""
import json


def save_to_json_file(my_obj, filename):
    """Write an object to a text file using JSON representation."""
    d = json.dump(my_obj)
    with open(filename, "w") as f:
        filename.write(d)
