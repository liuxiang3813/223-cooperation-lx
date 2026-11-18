#货币换算程序
hl= float(input("请输入汇率"))
hb = input("请输入带有符号$的货币")
#####代码开始#####
symbol = hb[0]
amount = float(hb[1:])

if symbol == '$':
    print("值人民币"+'￥{:.2f}'.format(amount * hl))
else:
    print("值美元"+'${:.2f}'.format(amount / hl))

####代码结束####
