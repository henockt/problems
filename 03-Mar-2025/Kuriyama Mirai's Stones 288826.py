# Problem: Kuriyama Mirai's Stones - https://codeforces.com/contest/433/problem/B

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
	a = [0] + a
	b = sorted(a)
	for i in range(1, n + 1):
		a[i] += a[i-1]
		b[i] += b[i-1]

	q = iinp()
	for _ in range(q):
		t, l, r = minp()
		if t == 1:
			print(a[r] - a[l-1])
		else:
			print(b[r] - b[l-1])


def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()