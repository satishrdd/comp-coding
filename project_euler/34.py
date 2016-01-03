# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
def value(n):
    value = sum((math.factorial(int(digit))) for digit in str(n))
    return value



n = input()
sum1 =0
for i in range(10,n+1):
    if value(i)%i==0:
        sum1 = sum1 + i
        
        
print sum1
