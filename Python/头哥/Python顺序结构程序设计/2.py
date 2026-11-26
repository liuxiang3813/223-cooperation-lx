import math
radius = float(input("请输入球的半径："))
surface_area = 4 * math.pi * radius**2
volume = 4.0 / 3.0 * math.pi * radius**2
print("球体表面积为："+str(surface_area)+"体积"+str(volume))