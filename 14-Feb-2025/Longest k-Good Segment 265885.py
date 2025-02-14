# Problem: Longest k-Good Segment - https://codeforces.com/problemset/problem/616/D

import sys, math
from functools import cmp_to_key
from operator import itemgetter
from bisect import bisect_left, bisect_right
from collections import Counter, defaultdict, deque

input = sys.stdin.readline

def iinp(): return (int(input()))
def linp(): return (list(map(int, input().split())))
def sinp(): return (input().strip())
def minp(): return (map(int, input().split()))

def solve():
	n, k = minp()
	a = linp()

	l = 0
	d = defaultdict(int)
	ans = 0
	start = 0
	for r in range(n):
		d[a[r]] += 1

		while len(d) > k:
			d[a[l]] -= 1
			if not d[a[l]]:
				del d[a[l]]
			l += 1

		if r-l+1 > ans:
			ans = r-l+1
			start = l

	print(start + 1, start + ans)


def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()