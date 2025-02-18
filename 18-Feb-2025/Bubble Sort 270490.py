# Problem: Bubble Sort - https://www.hackerrank.com/challenges/ctci-bubble-sort/problem

def countSwaps(a):
    # Write your code here
    cnt = 0
    size = len(a)
    for i in range(size):
        for j in range(size - i - 1):
            if (a[j] > a[j + 1]):
                a[j], a[j + 1] = a[j + 1], a[j]
                cnt += 1
    
    print(f"Array is sorted in {cnt} swaps.")
    print(f"First Element: {a[0]}")
    print(f"Last Element: {a[size - 1]}")

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)