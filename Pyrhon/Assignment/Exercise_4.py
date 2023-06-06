# Menu Driven Program
# For My tuple store 

def tuple_display_members(members) :
	print("Members list = ",members,end = " ")

def display_3_4_5_element(members) :
    print(members[2:5])    
    list_display_members(members)    

def tuple_retrieve_element(members):
    indx_loc = int(input('Please enter index : '))
    print(f"Member at index {indx_loc} is {members[indx_loc]}")

def tuple_retrieve_elements(members) :
    start_indx_loc = int(input('Please enter start index : '))
    end_indx_loc = int(input('Please enter end index : '))
    print(f"Member from {start_indx_loc} to {end_indx_loc} is {members[start_indx_loc:end_indx_loc+1]}")
    list_display_members(members)   
	
def find_min_element(members) :
    print(f"Minimum element in the members collection is {min(members)}")
    list_display_members(members)   

def reverse_tuple(members):
    print(f"Reversed collection is {tuple(reversed(members))}")
    list_display_members(members)   
			
def my_tuple_store():
    print("\n Welcome to Our tuple Store !!! ")
    print("Please enter a tuple Comma seperated that you would want to perform Operation Upon")
    members = tuple(input('for ex: Pratiksha,Kevin,Sachin,Yuvraj,Sania \n').split(","))

    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("  1:  Display elements of the tuple")
        print("  2:  Display third, fourth and fifth element from the collection ")
        print("  3:  Retrieve element at a given subscript")
        print("  4:  Retrieve elements from a given subscript and to a given subscript")
        print("  5:	 Find minimum element in the tuple " )
        print("  6:	 Reverse elements in the tuple " )
        print("  7: Exit the Program ")
        choice = int(input("Please enter your choice : "))
        
        if choice   ==1:
            tuple_display_members(members) 
        elif choice ==2:
            display_3_4_5_element(members) 
        elif choice ==3:
            tuple_retrieve_element(members)
        elif choice ==4:
            tuple_retrieve_elements(members) 
        elif choice ==5:
            find_min_element(members) 
        elif choice ==6:
            reverse_tuple(members) 
        elif choice ==7:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")

#my_tuple_store()	//For run above program please remove comments #		

# Menu Driven Program
# For my string store

def string_display(string_input) :
    print("String is ", string_input)

def display_3_4_5_element(string_input) :
    print(" 3_4_5 element is  ", string_input[2:5:1])

def string_retrieve_element(string_input):
    index_inp = int(input("Please enter the index : "))
    print(f" Character at position {index_inp} is ", string_input[index_inp])

def string_retrieve_elements(string_input) :
    start_index_inp = int(input("Please enter the start index : "))
    stop_index_inp = int(input("Please enter the stop index : "))
    print("   ", string_input[start_index_inp : stop_index_inp])

def find_min_element(string_input) :
    print("Minimum element " , min(string_input))

def reverse_string(string_input) :
    reversed(string_input)
    print("Reversed string m1  " , ''.join(reversed(string_input)))
    print("Reversed string m2  " , string_input[::-1])
    print("Reversed string m3  " , string_input[-1:-6:-1])

def  find_each_character_count(string_input):
    output_list = []
    for character_input in set(string_input):
        output_list.append((character_input,string_input.count(character_input)) )
    print(output_list)     

def  find_character_count_greater_than_1(string_input):
    output_list = []
    for character_input in set(string_input):
        if string_input.count(character_input) > 1:
            output_list.append(character_input )
    print(output_list)  

def  check_palindrome(string_input):
    # if string_input == string_input[::-1]:
    #     print("Its a palindrome")
    # else:
    #     print("Its not a palindrome")    
    i = 0 
    j = len(string_input)-1
    while(i<j):
        if string_input[i] != string_input[j]:
            print("Its not a palindrome")    
            return False
        i+=1
        j-=1
    print("Its  a palindrome") 
             
def my_string_store():
    print("\n Welcome to Our string Store !!! ")
    string_input = input("Please enter a string that you would want to perform Operation Upon").strip()

    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("  1:  Display the string")
        print("  2:  Display third, fourth and fifth element from the string ")
        print("  3:  Retrieve element at a given subscript")
        print("  4:  Retrieve elements from a given subscript and to a given subscript")
        print("  5:  Find minimum character in the string " )
        print("  6:  Reverse the string " )
        print("  7:  Output list of tuple( character,count) for each characters of the string  " )
        print("  8:  Output list of characters of the string that appear more than once " )
        print("  9:  Check if the string is a palindrome and return output message accordingly")
        print("  10: Exit the Program ")
        choice = int(input("Please enter your choice : "))
        
        if choice   ==1:
            string_display(string_input) 
        elif choice ==2:
            display_3_4_5_element(string_input) 
        elif choice ==3:
            string_retrieve_element(string_input)
        elif choice ==4:
            string_retrieve_elements(string_input) 
        elif choice ==5:
            find_min_element(string_input) 
        elif choice ==6:
            reverse_string(string_input) 
        elif choice ==7:
             find_each_character_count(string_input)
        elif choice ==8:
             find_character_count_greater_than_1(string_input)
        elif choice ==9:
             check_palindrome(string_input)
        elif choice ==10:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")

my_string_store()