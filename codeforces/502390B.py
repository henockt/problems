n = int(input())

if n <= 2:
    print(-1)
    exit()


# def pySort(nums):
#     leng = len(nums)
#     for i in range(leng):
#         for j in range(i, leng-1):
#             if nums[j] > nums[j+1]:
#                 nums[j], nums[i] = nums[i], nums[j]
#     return nums

out = [i for i in range(n, 0, -1)]
for o in out:
    print(o, end=" ")
print()
# print(pySort(out))

