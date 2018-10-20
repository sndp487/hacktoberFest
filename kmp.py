# kmp pattern matching algorithm

def calc_lps(a):
	n = len(a)
	dp = [0]*n
	i = 0; j = 1
	while j < n:
		if a[i] == a[j]:
			dp[j] = i + 1
			i = i + 1
		else:
			while i != 0 and a[i] != a[j]:
				i = dp[i-1]
			if a[i] == a[j]:
				dp[j] = i + 1
				i = i + 1
			else:
				dp[j] = 0
		j = j + 1
	# print(dp)
	return dp

def match(p,t):
	dp = calc_lps(p)
	i,j = 0,0
	while i < len(t):
		if t[i] == p[j]:
			i,j = i + 1, j + 1
		if j == len(p):
			print('Found')
			j = dp[j-1]
		elif i < len(t) and p[j] != t[i]:
			if j != 0:
				j = dp[j-1]
			else:
				i = i + 1
				

if __name__ == "__main__":
	a = raw_input()
	b = raw_input()
	match(a,b)