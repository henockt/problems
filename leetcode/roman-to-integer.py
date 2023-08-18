class Solution:
    def romanToInt(self, s: str) -> int:
        rom_int = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        x = 0
        already_done = False
        last_digit_done = False

        for i in range(0, len(s) - 1):
            current_num = rom_int[s[i]]
            next_num = rom_int[s[i + 1]]

            if already_done:
                already_done = False
                continue
            elif (current_num < next_num):
                x += (next_num - current_num)
                already_done = True # helps skip the next char if included in this loop

                # makes sure last char in roman num isn't repeatdly considered
                if (i + 1) == (len(s) - 1):
                    last_digit_done = True
            else:
                x += current_num

        # edge case, last char
        # first checks if done with the above loop
        if not (last_digit_done):
            x += rom_int[s[len(s) - 1]]

        return x