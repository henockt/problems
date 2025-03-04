# Problem: Array Splitting - https://codeforces.com/problemset/problem/1175/D

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
	n, k = minp()
	a = linp()
	b = a[::]
	for i in range(n-2, -1, -1):
		b[i] += b[i+1]
	c = list(enumerate(b))[1:]
	c.sort(key = lambda x : x[1], reverse=True)

	d = []
	for i in range(k-1):
		d.append(c[i][0])
	d.sort(reverse=True)

	ans = a[0]
	idx = 1
	for i in range(1, n):
		if d and i == d[-1]:
			idx += 1
			d.pop()
		ans += a[i] * idx
	
	print(ans)



def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()