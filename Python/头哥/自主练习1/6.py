import math

a = int(input("请输入三角形的边a:"))
b = int(input("请输入三角形的边b:"))
c = int(input("请输入三角形的边c:"))


if a>0 and b>0 and c>0 and a+b>c and b+c>a and c+a>b:
    p = (a+b+c) / 2
    s = math.sqrt(p*(p-a)*(p-b)*(p-c))
    print(f"三角形的周长={p*2:.1f}，面积={s:.1f}")
else:
    print("无法构成三角形！")