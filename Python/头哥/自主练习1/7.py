import math
a=float(input("请输入系数a:"))
b=float(input("请输入系数b:"))
c=float(input("请输入系数c:"))
if (a == 0):
    if (b == 0):print("此方程无解！")
    else:
        ans = -c / b
        print(f"此方程的解为:{ans:.3f}")
else:
    delta = b**2 - 4*a*c
    if delta == 0:
        ans = -b / (2*a)
        print(f"此方程有两个相等实根:{ans:.3f}")
    elif delta > 0:
        ans_1 = -(b/2*a) + (math.sqrt(delta)/2*a)
        ans_2 = -(b/2*a) - (math.sqrt(delta)/2*a)
        print(f"此方程有两个不等实根:{ans_1:.3f}和{ans_2:.3f}")
    else:
        ans_1 = -(b/2*a) + (math.sqrt(delta)/2*a)
        ans_2 = -(b/2*a) - (math.sqrt(delta)/2*a)
        print("此方程有两个不等虚根：{0}+{1}i和{0}-{1}i".format(ans_1,ans_2))