days_in_month = int(input("How many days are in the month? "))
start_day = int(input("What day of the week does the month start on? (0 for Monday, 1 for Tuesday, etc) "))

print("Mo Tu We Th Fr Sa Su")

day = 1
for i in range(start_day):
    print("   ", end="")
    
while day <= days_in_month:
    if day < 10:
        print(" ", end="")
    print(day, end=" ")
    if (day + start_day) % 7 == 0:
        print()
    day += 1

if (day + start_day - 1) % 7 != 0:
    print()
