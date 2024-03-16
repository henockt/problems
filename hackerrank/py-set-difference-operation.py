# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    n = int(input())
    eng = set(map(int, input().split()))
    m = int(input())
    fre = set(map(int, input().split()))

    print(len(eng.difference(fre)))