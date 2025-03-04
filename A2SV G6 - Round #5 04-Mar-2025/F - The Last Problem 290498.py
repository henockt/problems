# Problem: F - The Last Problem - https://codeforces.com/gym/591928/problem/F

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
	n = iinp()
	a = linp()
	b = linp()

	pref = [a * b for a, b in zip(a, b)]
	pref = [0] + pref
	for i in range(1, n + 1):
		pref[i] += pref[i-1]
	# print(pref)

	ans = pref[-1]
	for i in range(n):
		# c
		l, r = i-1, i+1
		curr = a[i] * b[i]
		while l >= 0 and r < n:
			curr += a[l] * b[r] + a[r] * b[l]
			ans = max(ans, pref[l] + curr + (pref[-1] - pref[r + 1]))
			l -= 1
			r += 1

		# noc
		l, r = i, i+1
		curr = 0
		while l >= 0 and r < n:
			curr += a[l] * b[r] + a[r] * b[l]
			ans = max(ans, pref[l] + curr + (pref[-1] - pref[r + 1]))
			l -= 1
			r += 1

	print(ans)

def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()