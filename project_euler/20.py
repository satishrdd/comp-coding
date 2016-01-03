import math
def sum_digits(n):
    s = 0
    while n:
        s += n % 10
        n //= 10
    return s

cases = int(input())
for i in range(0,cases):
    k = int(input())
    ans = sum_digits(math.factorial(k))
    print (ans)
