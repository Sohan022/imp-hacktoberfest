n = int(input("Enter binary number : "))
d = 0
p = 1
while n > 0:
    d = d + (n % 10) * p
    n //= 10
    p = p << 1
print("Equivalent decimal number :", d)
