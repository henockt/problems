test_cases = int(input())
output = []

for k in range(test_cases):
    posn = input()
    c = ["a", "b", "c", "d", "e", "f", "g", "h"]
    c.remove(posn[0])
    d = [1, 2, 3, 4, 5, 6, 7, 8]
    d.remove(int(posn[1]))

    for char in c:
        output.append(f"{char}{posn[1]}")
    for i in d:
        output.append(f"{posn[0]}{i}")

for o in output:
    print(o)