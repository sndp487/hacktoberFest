


ls = map(int,raw_input().split())
k = input()

n = len(ls)
ans = 0
save = []
for i in xrange(0,2**n):
	nob = 0
	for j in xrange(n):
		if i & (1<<j):
			nob += 1
	# print nob
	# if nob == k:
	# 	print 'shit'
	if nob == k:
		# print "insize"
		temp = []
		f = 0
		localans = 0
		for j in xrange(n):
			if i & (1<<j):
				temp.append(ls[j])
				if not f:
					localans = ls[j]
					f = 1
				else:
					localans &= ls[j]
		if localans > ans:
			save = temp
			ans = localans

print save
print ans

