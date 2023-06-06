import builtins
#import function_definitions
#from function_definitions import my_addition,my_square
from function_definitions import *

# function calling
builtins. print("Addition:",my_addition(int(input("First_num:")),int(input("Second_num:"))))
print("Square:",my_square(int(input("First_num:"))))
print("Exponenation:",my_exponenation(int(input("First_num:")),int(input("Second_num:"))))
print("Upper case : " , my_uppercase_func(input("Enter String")))
print("Incremented salary:", raise_sal_percent(int(input("Salary:")),int(input("Percentage raise:"))))
print("Height in feet and inches:", get_height(int(input("Enter height in cms : "))))
print("Rupees:" , convert_to_rupee(int(input("Enter amount in dollars"))))

source = input("Pleased enter the source ")
destination = input("Pleased enter the destination ")
fare = float(input("Pleased enter the fare "))
discount_rate = float(input("Pleased enter the discount_rate in percentage "))
print(get_fare_details(source,destination,fare,discount_rate))