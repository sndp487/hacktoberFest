#https://www.geeksforgeeks.org/majority-element/

n = input()
a = map(int,raw_input().split())

idx = 0; count = 1

for i in xrange(1,n):
	if a[i] == a[idx]:
		count += 1
	else:
		count -= 1
	if count == 0:
		idx = i; count = 1
print(a[idx])
