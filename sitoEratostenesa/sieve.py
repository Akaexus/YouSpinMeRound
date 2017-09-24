# Python 3.6.2
import math

def isPrime(n):
    if n<2:
        return False
    return all(n%i for i in range(2, int(math.sqrt(n))+1))

def sieve(n):
    array = list(range(0, n+1))
    for i in range(0, n+1):
        if isPrime(array[i]):
            for j in range(i*2, n)[::i]:
                array[j] = 0
        else:
            array[i] = 0
    return list(filter(lambda x: x!=0, array))

print(sieve(2137000))
