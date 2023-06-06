# #EX1

# i = 1
# while i <= 10:
#     print(i)
#     i += 1

# #EX2

# print("Number Pattern : ")
# row = 5
# for i in range(1, row + 1, 1):
#     for j in range(1, i + 1):
#         print(j, end = " ")
#     print("")

# #EX3

# s = 0
# n = int(input("Enter number : "))
# for i in range(1, n+1, 1):
#     s += i
# print("Sum is: ", s)

# #OR

# n = int(input("Enter number : "))
# x = sum(range(1, n+1))
# print('Sum is:', x)

#EX4

# n = 2
# for i in range(1, 11, 1):
#     product = n * i
#     print(product)

#EX5

# number = [12, 75, 150, 180, 145, 525, 50]
# for item in number:
#     if item > 500:
#         break
#     elif item > 150:
#         continue
#     elif item % 5 == 0:
#         print(item)

#EX6

n = 5
k = 5
for i in range(0,n+1):
    for j in range(k-i,0,-1):
        print(j,end=' ')
    print()

#EX7

list1 = [10, 20, 30, 40, 50]
new_list = reversed(list1)
for item in new_list:
    print(item)

#EX8

