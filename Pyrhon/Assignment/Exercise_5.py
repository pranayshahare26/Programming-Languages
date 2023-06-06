# Dictionary Exercise

def dict_display_capitals(capitals):
    """Display number of elements in the capitals collection"""
    print(f"capitals dictionary = {capitals}")

def dict_add_element(capitals):
    """Add "Afghanistan": "Kabul"  to the capitals collection """
    inp_key = input("Please enter the key to add ")
    inp_val = input("Please enter the value to add ")
    capitals[inp_key]= inp_val
    dict_display_capitals(capitals)		

def dict_add_elements(capitals):
    """Add Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella to the capitals collection"""    
    sub_dict_of_capitals= {}
    keys = input("Please enter the additional countries as keys for ex : India,USA,Srilanka").split(',')
    for elem in keys :
        sub_dict_of_capitals[elem] = input(f"Please enter the capital for {elem}: ").strip()
    capitals.update(sub_dict_of_capitals)    
    dict_display_capitals(capitals)		
	
def dict_remove_element(capitals):
    """Remove the USA from the collection"""    
    capitals.pop(input("Please enter the key you would want to remove"))
    dict_display_capitals(capitals)		

def my_dict_store():
    print("\n Welcome to Our Dict Store !!! ")

    capitals= {}
    keys = input("Please enter the countries as keys for ex : India,USA,Srilanka").split(',')
    for elem in keys :
        capitals[elem] = input(f"Please enter the capital for {elem}: ").strip()

    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("    1: Display elements in the capitals collection")
        print('    2: Add an element to the capitals collection like --> Afghanistan: Kabul')
        print('    3: Add multiple elements to the capitals collection like -->  Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella')
        print("    4: Remove an element from the collection 	")
        print("    5: Exit the Program ")
        choice = int(input("Please enter your choice "))
        
        if choice   ==1:
            dict_display_capitals(capitals) 
        elif choice ==2:
            dict_add_element(capitals)
        elif choice ==3:
            dict_add_elements(capitals)
        elif choice ==4:
            dict_remove_element(capitals) 
        elif choice ==5:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")	

my_dict_store()            