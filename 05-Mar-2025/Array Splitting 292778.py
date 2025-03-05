# Problem: Array Splitting - https://codeforces.com/problemset/problem/1197/C

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

	d = []
	for i in range(1, n):
		d.append(a[i] - a[i-1])
	d.sort()
	can = len(d)-k+1
	print(sum(d[:can]))


def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()