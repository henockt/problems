n, k = map(int, input().split())

if n % 2 == 0:
    odds, evens = n // 2, n // 2
else:
    evens = n // 2
    odds = n - (evens)

if k > odds:
    even_start = 2
    k = k - odds
    print(even_start * k)
else:
    odd_start = 1
    print(odd_start + (2 * (k - 1)))