# Problem: Segments with Small Spread - https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

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

	l, csum = 0, 0
	ans = 0
	maxq, minq = deque(), deque()
	# maxq -> decreasing
	# minq -> increasing
	for r in range(n):
		while len(maxq) > 0 and a[r] >= a[maxq[-1]]:
			maxq.pop()
		maxq.append(r)
		while len(minq) > 0 and a[r] <= a[minq[-1]]:
			minq.pop()
		minq.append(r)

		while a[maxq[0]] - a[minq[0]] > k:
			if maxq[0] == l:
				maxq.popleft()
			if minq[0] == l:
				minq.popleft()
			l += 1
			
		ans += r - l + 1

	print(ans)

def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()