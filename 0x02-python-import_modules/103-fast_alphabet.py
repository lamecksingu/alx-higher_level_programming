#!/usr/bin/python3
import string
__import__('os').write(1, getattr(__import__(string.__name__),'ascii_uppercase').encode() + b'\n')
