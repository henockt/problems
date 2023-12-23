test_cases = int(input())
output = []

for i in range(test_cases):
    keys = [char for char in input()]
    out = []
    lowers_indices, upper_indices = [], []
    lowers_indices_len, upper_indices_len = 0, 0

    index = 0
    for key in keys:
        if key == "b":
            if lowers_indices_len == 0:
                continue
            out[lowers_indices.pop()] = None
            lowers_indices_len -= 1
        elif key == "B":
            if upper_indices_len == 0:
                continue
            out[upper_indices.pop()] = None
            upper_indices_len -= 1
        else:
            if str(key).islower():
                lowers_indices.append(index)
                lowers_indices_len += 1
            else:
                upper_indices.append(index)
                upper_indices_len += 1
            
            index += 1
            out.append(key)

    o = ""
    for c in out:
        if c != None:
            o += c
    output.append(o)

for o in output:
    print(o)