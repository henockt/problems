n = int(input())
events = list(map(int, input().split()))

polices = 0
count = 0

for event in events:
    if event == -1:
        if polices == 0:
            count += 1
        else:
            polices -= 1
    else:
        polices += event

print(count)
