
employee, duration = map(int, input().split(","))
#duration = int(input())
salary_per_hour = 84

salary_total = duration * salary_per_hour

if duration < 60:
    salary_total -= 700
elif duration <= 120:
    salary_total = salary_total
else:
    salary_total = 120 * salary_per_hour + (duration - 120) * 1.15 * salary_per_hour
print(f"{employee}号职工应发工资{salary_total:.2f}")


