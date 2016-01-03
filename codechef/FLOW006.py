import sys
def sum_digits(n):
    s = 0
    while n:
        s += n % 10
        n //= 10
    return s
    
i = input()
for j in range (0,i):
	k = input()
	print sum_digits(k)
