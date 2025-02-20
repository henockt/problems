# Problem: Insertion Sort - https://www.hackerrank.com/challenges/insertionsort1/problem

def insertionSort1(n, arr):
    # Write your code here
    for i in range(1, n):
        j = i
        while j > 0 and arr[j] < arr[j-1]:
            temp = arr[j]
            arr[j] = arr[j-1]
            for num in arr:
                print(num, end=" ")
            print()
            arr[j-1] = temp
            j -= 1
    
    for num in arr:
        print(num, end=" ")
    print()
