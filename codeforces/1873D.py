test_cases = int(input())
output = []

for i in range(test_cases):
    n, k = map(int, input().split())
    s = input()

    indices, l = [], 0
    for j, c in enumerate(s):
        if c == "B":
            indices.append(j)
            l += 1

    diff, steps, start = 0, 0, True
    for index in indices:
        if start:
            steps += 1
            diff = index
            start = False
        elif index - diff + 1 > k:
            steps += 1
            diff = index

    output.append(steps)

for o in output:
   print(o)

