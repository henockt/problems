if __name__ == '__main__':
    N = int(input())
    nums = list()
    
    for _ in range(N):
        cmd = input().split()
        
        if (cmd[0] == "insert"):
            nums.insert(int(cmd[1]), int(cmd[2]))
        elif (cmd[0] == "print"):
            print(nums)
        elif (cmd[0] == "remove"):
            nums.remove(int(cmd[1]))
        elif (cmd[0] == "append"):
            nums.append(int(cmd[1]))
        elif (cmd[0] == "sort"):
            nums.sort()
        elif (cmd[0] == "pop"):
            nums.pop()
        elif (cmd[0] == "reverse"):
            nums.reverse()