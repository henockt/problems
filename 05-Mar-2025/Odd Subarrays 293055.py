# Problem: Odd Subarrays - https://codeforces.com/problemset/problem/1686/B

import sys, math
from functools import cmp_to_key
from operator import itemgetter
from bisect import bisect_left, bisect_right
from collections import Counter, defaultdict, deque
from heapq import heappush, heappop, heapify

input = sys.stdin.readline

def iinp(): return (int(input()))
def linp(): return (list(map(int, input().split())))
def sinp(): return (input().strip())
def minp(): return (map(int, input().split()))

def solve():
	n = iinp()
	a = linp()

	i = 0
	ans = 0
	while i < n-1:
		if a[i] > a[i+1]:
			ans += 1
			i += 1
		i += 1
	print(ans)


def main():
	t = 1
	t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()