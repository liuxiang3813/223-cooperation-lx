user_name = input()
password = int(input())

if user_name == "admin" and password == 123456:
    print("登陆成功")
else:
    print("登录失败")