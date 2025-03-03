# Problem: Red and Blue - https://codeforces.com/contest/1469/problem/B

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
	r = linp()
	m = iinp()
	b = linp()
	for i in range(1, n):
		r[i] += r[i-1]
	for i in range(1, m):
		b[i] += b[i-1]

	print(max(max(r), 0) + max(max(b), 0))


def main():
	t = 1
	t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()