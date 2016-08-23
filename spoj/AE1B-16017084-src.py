n,k,s = map(int, raw_input().split(' '))
needed = k*s

num = raw_input().split(' ')
number = map(int,num)
number.sort(reverse = True)

i =0
k = 0
while needed>0:
    needed -= number[i]
    i+=1
print i
    