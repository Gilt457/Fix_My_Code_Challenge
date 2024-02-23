#!/usr/bin/python3
"""FizzBuzz program."""

import sys


def fizzbuzz(num):
    """Print numbers from 1 to num with Fizz, Buzz, and FizzBuzz.

    Args:
        num (int): The upper limit of the range.

    Returns:
        None
    """
    if num < 1:
        return

    result = []
    for i in range(1, num + 1):
        word = ""
        if i % 3 == 0:
            word += "Fizz"
        if i % 5 == 0:
            word += "Buzz"
        if not word:
            word = str(i)
        result.append(word)
    print(" ".join(result))


if __name__ == "__main__":
    if len(sys.argv) <= 1:
        print("Missing number")
        print("Usage: ./0-fizzbuzz.py <number>")
        print("Example: ./0-fizzbuzz.py 89")
        sys.exit(1)

    number = int(sys.argv[1])
    fizzbuzz(number)
