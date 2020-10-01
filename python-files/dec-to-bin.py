n = int(input("Enter decimal number : "))
b = 0
p = 1
while n > 0:
    b = b + (n & 1) * p
    n = n >> 1
    p *= 10
print("Equivalent binary number :", b)
