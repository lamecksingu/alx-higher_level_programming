#!/usr/bin/python3
def uppercase(string):
    for char in string:
        upper_char = chr(ord(char) - 32) if 'a' <= char <= 'z' else char
        print("{}".format(upper_char), end="")
    print()
