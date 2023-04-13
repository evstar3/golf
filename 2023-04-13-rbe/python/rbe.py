#!/usr/bin/env python3

def total_rbe(input: str) -> int:
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
    return sum(int(count) * BLOONS[bloon] for count, bloon in (pair.strip().split(' ') for pair in input.split(',')))

def main():
    test_cases = (
        ('1 red', 1),
        ('7 green', 21),
        ('5 bfb, 11 moab', 22596),
        ('1 red, 2 yellow, 3 white, 4 zebra, 5 moab, 6 ddt', 8110),
        ('1 moab, 1 bfb, 1 zomg, 1 ddt, 1 bad, 1 red, 1 blue, 1 green, 1 yellow, 1 pink, 1 black, 1 white, 1 purple, 1 lead, 1 zebra, 1 rainbow, 1 ceramic', 77257)
    )

    for string, result in test_cases:
        assert(total_rbe(string) == result)

if __name__ == '__main__':
    main()