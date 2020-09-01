#!/usr/bin/env python3
# -*- coding : utf-8 -*-

import base64
import base58

def alter(val):
    return (val << 4)

f = open('flag.txt', 'rb')

x = f.readline().decode('utf-8')[:-1]

b1 = base64.b64encode(bytes(x,'utf-8'))
b2 = base58.b58encode(b1)

x = b2.decode('utf-8')
f = 'A'*4 + 'B'*8 + 'C'*12 + 'x'*4 + 'c'*27
l1 = []
for i,j in zip(x,f):
    p = alter(ord(i))
    q = alter(ord(j))
    l1.append(p^q)
print(l1)
