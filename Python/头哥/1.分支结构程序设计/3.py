price = float(input("请输入原油价格(美元/桶):"))
amount = input("请输入原油数量:").strip()

amount = amount.replace(" ", "")

if amount.endswith("bbl"):
    num = float(amount[:-3])
    barrels = num
elif amount.endswith("t"):
    num = float(amount[:-1])
    barrels = num / 0.14
else:
    print("输入格式有误")
    exit()

money = price * barrels
print("需要的美元金额为:{:.2f}".format(money))