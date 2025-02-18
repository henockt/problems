# Problem: Books - https://codeforces.com/contest/279/problem/B

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
	n, t = minp()
	arr = linp()

	curr = 0
	l = 0
	ans = 0
	for r in range(n):
		curr += arr[r]

		while curr > t:
			curr -= arr[l]
			l += 1

		ans = max(ans, r - l + 1)

	print(ans)

def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()