# A. Elephant
cord = int(input())
d = cord % 5
if d == 0:
    print(cord // 5)
else:
    print(((cord - d) // 5) + 1)