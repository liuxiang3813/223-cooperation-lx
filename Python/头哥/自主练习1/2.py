a = int(input())
b = int(input())
max = 0

if a>b:
    max = a
elif b>a:
    max = b
else:
    max = a

print("最大值："+str(max))