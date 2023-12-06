# B. Lost Permutation
# final permutation list should incl.
# each elem 1 to max(elems), i.e., no
# skipping
test_cases = int(input())
out = []

for t in range(test_cases):
    m, s = map(int, input().split())
    elems = list(map(int, input().split()))

    curr_sum = 0
    val = 1
    while curr_sum < s:
        if val not in elems:
            curr_sum += val
            elems.append(val)
        val += 1

    if curr_sum == s and len(elems) == max(elems):
        out.append("YES")
    else:
        out.append("NO")

for o in out:
    print(o)