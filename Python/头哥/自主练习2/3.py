number = int(input("请输入一个三位整数:"))

bai = number // 100
shi = (number - bai * 100) // 10
ge = number % 10

is_Armstrong = bai**3 + shi**3 + ge**3 - number

if(is_Armstrong == 0):
    print(str(number)+"是水仙花数")
else:
    print(str(number)+"不是水仙花数")