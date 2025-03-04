# Problem: Running Miles - https://codeforces.com/problemset/problem/1826/D

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
	b = linp()

	p = [b[i] + i for i in range(n)]
	s = [b[i] - i for i in range(n)]
	for i in range(1, n):
		p[i] = max(p[i], p[i-1])
		s[n-i-1] = max(s[n-i-1], s[n-i])

	ans = 0
	for i in range(1, n-1):
		ans = max(ans, p[i-1] + b[i] + s[i+1])

	print(ans)


def main():
	t = 1
	t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()