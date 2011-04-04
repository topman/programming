#coding: utf-8

def get_primes(start, end):
    """Get the primes between start and end
    """
    out = []
    for i in range(start, end+1):
        if is_prime(i):
            out.append(i)
    return out


def is_prime(digit):
    """judge whether digit is a prime or not
    """
    if digit < 2:
        return False
    if digit < 4:
        return True
    #import math
    #up = int(math.sqrt(digit))
    up = int(digit ** 0.5)
    for i in range(2, up+1):
        if digit % i == 0:
            return False
    return True

if __name__ == "__main__":
    tests_num = int(raw_input())
    out = []
    for i in range(tests_num):
        line = raw_input()
        start, end = line.strip().split(" ")
        start = int(start)
        end = int(end)
        primes = get_primes(start, end)
        out.append(primes)
    i = 0
    for x in out:
        for a in x:
            print a
        if i != tests_num-1:
            print
        i += 1



