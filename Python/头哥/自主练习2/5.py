import math
x = int(input())

if x > 0:
    y = (x**2 - 3*x) / (x + 1) + 2 * math.pi + math.sin(x)
elif x == 0:
    y = 0
else:
    y = math.log(-5 * x) + 6 * (math.sqrt(abs(x) + math.exp(4))) - (x + 1)**3

print(f"y={y}")