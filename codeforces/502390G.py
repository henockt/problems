from collections import deque

directory = deque()

tests = int(input())

for _ in range(tests):
    cmd = input()

    if cmd == "pwd":
        if not directory:
            print("/")
            continue
        out = ""
        for elem in directory:
            out = elem + "/" + out
        print(f"/{out}")
        continue
    
    twos = cmd.split()
    if twos[1][0] == "/":
        directory = deque()

    cmds = twos[1].strip("/").split("/")

    for direc in cmds:
        if direc == "..":
            directory.popleft()
        else:
            directory.appendleft(direc)


