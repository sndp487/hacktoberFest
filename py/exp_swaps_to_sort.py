def is_sorted(a):
	n = len(a)
	prev = -10**10
	for i in xrange(n):
		if a[i] >= prev:
			prev = a[i]
		else:
			return False
	return True

def no_of_inv(a):
	n = len(a)
	ans = 0
	for i in xrange(n):
		for j in xrange(i+1,n):
			if a[i] > a[j]:
				ans += 1
	return ans

def E(a):
	if is_sorted(a):
		return 0
	else:
		n = len(a)
		cnt = no_of_inv(a)
		exp = 1.0/cnt
		for i in xrange(n):
			for j in xrange(i+1,n):
				if a[j] > a[i]:
					a[i],a[j] = a[j],a[i]
					exp *= (E(a) + 1)
					a[i],a[j] = a[j],a[i]
		return exp


if __name__ == "__main__":
	a = map(int,raw_input().split())
	print(E(a))