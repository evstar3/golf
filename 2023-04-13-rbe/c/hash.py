#!/usr/bin/env python3

BLOONS = {
    'red': 1,
    'blue': 2,
    'green': 3,
    'yellow': 4,
    'pink': 5,
    'white': 11,
    'black': 11,
    'purple': 11,
    'lead': 23,
    'zebra': 23,
    'rainbow': 47,
    'ceramic': 104,
    'moab': 616,
    'bfb': 3164,
    'zomg': 16656,
    'ddt': 816,
    'bad': 55760,
}

def hash_bloon(bloon: str) -> int:
    code = ord(bloon[0]) * ord(bloon[2])
    code = (code * 7711) >> 15
    return code & 0x1f

res = {hash_bloon(bloon): bloon for bloon in BLOONS}

print('{', end='')
for i in range(max(res.keys()) + 1):
    if i in res:
        print(BLOONS[res[i]],end=',')
    else:
        print('0',end=',')
print('}')