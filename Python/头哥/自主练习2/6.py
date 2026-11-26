grade = int(input())

if 0 <= grade <= 100:
    if grade < 60:
        print("成绩不合格")
    else:
        print("成绩合格")
else:
    print("输入错误")