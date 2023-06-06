from function_definitions import my_addition

# for counter_variable in range(0,5,1): #start = 0 , stop = 5 , step = 1
#      print("Addition:", counter_variable , ": " , my_addition(1,2))     
#      print(f"F_Addition: { counter_variable }: {my_addition(1,2)}")     

# counter_variable = 0 
# while counter_variable < 5 :
#      print("Addition:", counter_variable , ": " , my_addition(1,2))     
#      counter_variable += 1

# while True:
#      print("Addition:",": " , my_addition(1,2))     
#      if input("Enter n to exit ").lower() == 'n' :
#           break

     
# range(start, stop,step_size)
# print(list(range(2,20,3)))
# print(list(range(2,20)))
# print(list(range(4))) 
# print(list(range(0,4)))

# num=1 
# while(num<10):
#      num=num+1
#      print(num, end = " ")
     
     
# num=1 
# while(num<10):
#      print(num, end = " ")
#      num+=1
#      if num%2 == 0 :
#           break
#      else:
#           continue
     
     
 


# num=1 
# while(num<10):
#      if num<6 : 
#         num+=1
#      num+=1   
#      print(num, end = " ")          
        

num=1 
while(num<10):
     num+=1
     if num<6 : 
          print(num, end = " ")
     
     
# ***********************************************************
# Practice problem 1 
# ***********************************************************
# Create a game for FIZZ BUZ and keeping playing with the user untill the user chooses to skip the game


# 9 -- > fizz
# 10 -> buzz
# 15 -> fizz buzz
# 26 -> invalid input 


# if input_num %3 == 0 and input_num %5 == 0 :
#     print('Fizz Buzz')
# elif input_num %3 == 0 :
#     print('Fizz')
# elif input_num %5 == 0 :
#     print('Buzz')

def fizz_buzz(input_num):
    if input_num % 3 == 0 :
        print("Fizz" , end = ' ')
        if input_num % 5 == 0 :
            print('Buzz')
    elif input_num % 5 == 0 :
            print('Buzz')
    else:
          print('Invalid Input ')

def play_game():    
    while True:
        input_num = int(input("Enter number"))
        fizz_buzz(input_num)    
        if input('\n Enter n to exit').lower() == 'n':
            break
play_game()        

