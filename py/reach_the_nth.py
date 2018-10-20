# https://practice.geeksforgeeks.org/problems/reach-the-nth-point/0

from math import factorial

def ncr(n,r):
    num = factorial(n)
    den = factorial(r)*factorial(n-r)
    return num//den

t = int(input())
while t:
    t = t - 1
    n = int(input())
    ans = 0
    for k in range(0,(n//2) + 1):
        ans += ncr(n-k,k)
    print(ans)
    