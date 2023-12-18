test_cases = int(input())
output = []

for i in range(test_cases):
    n = int(input())
    a, b = n / 2, n // 2
    if a == b:
        output.append(b - 1)
    else:
        output.append(b)
    
for o in output:
    print(o)