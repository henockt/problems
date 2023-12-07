test_cases = int(input())
output = []
for i in range(test_cases):
    a, b = map(int, input().split())
    moves = 0
    if a % b != 0:
        moves = (((a // b) + 1) * b) - a
    output.append(moves)

for o in output:
    print(o)