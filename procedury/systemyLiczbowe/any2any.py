#!/usr/bin/env python
# -*- coding: utf-8 -*-

import re

def horner(array, x):
    temp = array[0]
    for i in range(1, len(array)):
        temp = temp*x+array[i]
    return temp

def any2any(number: list, base: int, desiredBase: int):
    bannedChars = [' ', '_', '!', '<', '>']
    if re.match(r'([A-z0-9]+)', number) and base>1 and desiredBase > 1:
        number = list(map(lambda x: ord(x.lower())-87 if x.isalpha() else int(x), list(filter(lambda digit: not digit in bannedChars, list(number)))))
        dec = horner(number, base)
        digits = []
        while dec:
            digit = dec%desiredBase
            digits.insert(0, str(digit) if digit<10 else chr(digit+87))
            dec= int(dec / desiredBase)
        return ''.join(digits)
    else:
        return None


print(any2any('jawaskript', 36, 10))
