#!/usr/bin/python3
from sys import argv
if __name__ == "__main__":
    num_args = len(argv) - 1
    plural = "s" if num_args != 1 else ""
    has_args = num_args > 0

    if has_args:
        print("{} argument{}:".format(num_args, plural))
        for i, arg in enumerate(argv[1:], start=1):
            print("{}: {}".format(i, arg))
    else:
        print("0 arguments.")
