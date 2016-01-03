import math


k = int(input())

for i in range(0,k):
    n ,m = map(int,input().split())
    answer = math.factorial(n+m)
    answer = answer//math.factorial(n)
    answer = answer//math.factorial(m)
    print (answer%1000000007)
