# Exercise : Questions based on variable, statements , input and print functions and operators 

# 1) Accept two numbers from the user and print 
    # a) addition 
    # b) first number squared 2 
    # c) first number raised to number second number

first_num = int(input("Enter first number: "))
second_num = int(input("Enter second number: "))
print("addition : ", first_num + second_num)
print("first number squared 2 : ", first_num*first_num)
print("first number raised to number second number : ", first_num ** second_num)

# 2) Accept String from user and output upper case of the input string

string = input("Enter string: ")
print(string.upper())

# 3) Define a variable named "raise_salary_percentage" and get the salary raise 
    # percentage from the user, Now apply the raise to an employee
    # with harcoded data Name= 'gaurav' existing_salary = 900 INR and 
    # print the incremented salary to the console

raise_salary_percentage = int(input("Enter salary raise %: "))
Name= 'gaurav'
existing_salary = 900
print("Increamented salary is : ", int(existing_salary * (1 + raise_salary_percentage/100)))

# 4) Get the height from the user in cms and display the user height back to console
# in foot/feet and inches
# height = float(input("Enter the height in cm : "))
# number = height / 30.48
# feet = int(number)
# inches = (number - feet) * 12
# print(f"{feet} feet and {inches} inches")

height_cm = float(input("Please enter your height in centimeters: "))
height_in = height_cm / 2.54
height_ft = int(height_in // 12)
height_in = int(height_in % 12)
print(f"Your height is {height_ft} feet and {height_in} inches.")


# 5) Get the no of the dollars from the user apply the conversion of 
# 1 dollar = 82 rupees and print the amount to the console in rupees

num_of_dollar = int(input("Enter number of dollars : "))
print("Amount in rupees is : ", num_of_dollar * 82)

# 6) Take the source, destination, fare in INR, discount_rate percentage from the user and display the 
# string ex: "fare from mumbai to pune is 300 INR with has a discount of 5%"

source = input("Pleased enter the source ")
destination = input("Pleased enter the destination ")
fare = float(input("Pleased enter the fare "))
discount_rate = float(input("Pleased enter the discount_rate in percentage "))

print("Fare from" , source ," to " , destination , " is " , fare- (fare*discount_rate/100)  , " INR with has a applied discount of " , discount_rate, "%")
print(f"Fare from { source } to { destination } is { fare- (fare*discount_rate/100)} INR with has a applied discount of { discount_rate}%")
