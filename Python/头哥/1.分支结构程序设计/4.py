# 输入房屋类型、面积、月数
type_str = input("类型")          # 输入如 "1"
area = float(input("面积"))
months = int(input("月数"))

# 根据类型确定单价（元/平米/月）
if type_str == "1":
    unit_price = 0.8              # 楼梯房
elif type_str == "2":
    unit_price = 1.8              # 电梯房
elif type_str == "3":
    unit_price = 3.0              # 商业门面
else:
    print("房屋类型输入有误！")
    exit()

# 基础费用 = 单价 × 面积 × 月数
fee = unit_price * area * months

# 一次性缴纳 12 个月及以上，95 折优惠
if months >= 12:
    fee *= 0.95

print("物业费{:.2f}".format(fee))


