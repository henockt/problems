# Problem: Karen and Coffee - https://codeforces.com/contest/816/problem/B

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

MAX_N = 2 * 10**5

def solve():
	n, k, q = minp()
	arr = [0] * (MAX_N + 2)

	for _ in range(n):
		l, r = minp()
		arr[l] += 1
		arr[r + 1] -= 1

	for i in range(1, MAX_N + 1):
		arr[i] += arr[i-1]

	for i in range(1, MAX_N + 1):
		if arr[i] >= k:
			arr[i] = 1
		else:
			arr[i] = 0
		arr[i] += arr[i - 1]

	for _ in range(q):
		l, r = minp()
		print(arr[r] - arr[l - 1])


def main():
	t = 1
	# t = int(input())
	for i in range(t):
		solve()
	
if __name__ == "__main__":
	main()