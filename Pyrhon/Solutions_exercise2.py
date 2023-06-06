# 1) Take a number from the user and print sum from 1 to that number 
# v_sum = 0 
# for i in range(1,int(input("Enter number"))+1,1):
#      v_sum += i 
# print("Sum is ", v_sum)     

def is_prime(number):
    for divisor in range(2,(number//2)+1,1):
        if number%divisor == 0 :
            return False
    return True    

#print(is_prime(15))

# for i in range(2,int(input("Enter number:"))+1):
#     if  is_prime(i):
#         print(i , end = ' ')

# 3) Take a number from the user and print all Odd numbers from 1 to that number 

# for i in range(1,int(input("Enter number:"))+1):
#     if  i % 2 !=0 :
#         print(i , end = ' ')


#4) Take a number from the user and print all Even numbers from 1 to that number 
# for i in range(1,int(input("Enter number:"))+1):
#     if  i % 2 ==0 :
#         print(i , end = ' ')


# 5) Take a number from the user and print fibonacci sequence till that number
# 	eg : fibonnaci sequence for 5 is 0,1,1,2,3,5

num1 = -1
num2 = 1
input_number = int(input("Please enter the number till which you want to  print fibonacci sequence ?"))
while(True):
    sum = num1+num2
    if sum > input_number:
        break
    print(sum,end= " ") 
    num1 = num2
    num2 = sum
    
