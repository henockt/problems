# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict

if __name__ == "__main__":
    n, m = map(int, input().split())
    
    d = defaultdict(list)
    
    # grp A
    for i in range(n):
        d[input()].append(i + 1)
    
    # grp B
    for i in range(m):
        c = input()
        if not d.get(c):
            print(-1)
            continue
        
        for index in d[c]:
            print(f"{index} ", end="")
        print()