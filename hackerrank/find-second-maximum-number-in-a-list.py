if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    
    winner = max(arr)
    currRunnerup = -101
    
    for score in arr:
        if (currRunnerup < score < winner):
            currRunnerup = score
    
    print(currRunnerup)