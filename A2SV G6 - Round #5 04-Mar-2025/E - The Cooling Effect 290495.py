# Problem: E - The Cooling Effect - https://codeforces.com/gym/591928/problem/E

import sys, math
from functools import cmp_to_key
from operator import itemgetter
from bisect import bisect_left, bisect_right, bisect
from collections import Counter, defaultdict, deque

input = sys.stdin.readline

def iinp(): return (int(input()))
def linp(): return (list(map(int, input().split())))
def sinp(): return (input().strip())
def minp(): return (map(int, input().split()))

def solve():
	z = sinp()
	n, k = minp()
	a = linp()
	t = linp()
	mp = {}
	for i in range(k):
		mp[a[i]] = t[i]

	ri = []
	for ind, temp in mp.items():
		ri.append(temp + ind)
	ri.sort()
	# print(ri)

	seen = defaultdict(int)
	ans = [float("inf")] * (n + 1)
	j = 0
	for i in range(1, n + 1):
		while j < k and ri[j] in seen:
			seen[ri[j]] -= 1
			if not seen[ri[j]]:
				del seen[ri[j]]
			j += 1
		if j < k:
			ans[i] = min(ans[i], ri[j] - i)
		if i in mp:
			seen[mp[i] + i] += 1

	for i in range(k):
		a[i] = n - a[i] + 1
	mp = {}
	for i in range(k):
		mp[a[i]] = t[i]

	seen = defaultdict(int)
	j = 0
	ri = []
	for ind, temp in mp.items():
		ri.append(temp + ind)
	ri.sort()
	# print(ri)
	# print(*ans[1:])

	for i in range(1, n + 1):
		while j < k and ri[j] in seen:
			seen[ri[j]] -= 1
			if not seen[ri[j]]:
				del seen[ri[j]]
			j += 1
		if j < k:
			ans[n - i + 1] = min(ans[n - i + 1], ri[j] - i) 
		if i in mp:
			seen[mp[i] + i] += 1

	print(*ans[1:])
	# print(all_)
	# print(*ans[1:])

def main():
	t = 1
	t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()