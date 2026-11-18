price=float(input("黄金价格"))
rate=float(input("美元汇率"))
grams=float(input("黄金重量"))
#代码开始
OUNCE = 31.1034768
usd = price / OUNCE * grams   # 每克美元价 × 克数 = 美元总额
cny = usd * rate                 # 美元总额 × 汇率 = 人民币

print("黄金价值{:.2f}".format(cny))
#代码结束