# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    setA = set(map(int, input().split()))
    n = int(input())
    strictSuperset = True
    
    for _ in range(n):
        currSet = set(map(int, input().split()))
        if (currSet.difference(setA)):
            strictSuperset = False
            break
        
    print(strictSuperset)