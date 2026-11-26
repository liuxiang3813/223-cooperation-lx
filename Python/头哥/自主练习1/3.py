time = int(input())

if time < 0 or time > 24:
    print("输入时间格式错误")
elif time < 12:
    print(f"现在是上午{time}点")
elif time == 12:
    print("现在是中午12点")
elif time < 24:
    print(f"现在是下午{time%12}点")
else:
    print("现在是上午0点")