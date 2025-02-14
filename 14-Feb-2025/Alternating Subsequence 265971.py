# Problem: Alternating Subsequence - https://codeforces.com/contest/1343/problem/C

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
	n = iinp()
	a = linp()

	pos, neg = 0, -10**10
	ans = 0
	for x in a:
		if x < 0:
			ans += pos
			pos = 0
			neg = max(neg, x)
		else:
			if neg != -10**10:
				ans += neg
			neg = -10**10
			pos = max(pos, x)

	if neg != -10**10:
		ans += neg
	print(ans + pos)


def main():
	t = 1
	t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()