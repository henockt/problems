binary = input()
l = len(binary)

for i in range(l):
    if binary[i] == "0":
        current = binary[0:i] + binary[i+1:]
        print(current) 
        exit()
    
print(binary[0:l-1])

