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

#my_dict_store()            

def set_union(setA,setB):
  set_display(setA)
  set_display(setB)
  print("Union",setA.union(setB))

def set_intersection(setA,setB):
  set_display(setA)
  set_display(setB)
  print("Intersection",setA.intersection(setB))  

def set_minus(setA,setB):
  set_display(setA)
  set_display(setB)
  print("Difference",setA.difference(setB))    

def is_member_of_set(rcv_set):
   element= input("Please enter element to search for ") 
   print(f"Element{element} is present(True/False): { element in rcv_set }")  
   set_display(rcv_set)

def set_display(rcv_set):
   print(rcv_set)

def set_add_element(rcv_set):
	rcv_set.add(input("Please enter element to add"))   
	set_display(rcv_set)
	
def set_add_elements(rcv_set):
    rcv_set.update(set(input("Please enter comma seperated elements for the set ").split(",")))   
    set_display(rcv_set)
	
def set_remove_element(rcv_set):
    rcv_set.discard(input("Please enter element to remove"))
    set_display(rcv_set)            


def my_set_store():
    print("\n Welcome to Our Set Store !!! ")
	
    # setA = set(input("Please enter comma seperated elements for the set A").split(","))
    # setB = set(input("Please enter comma seperated elements for the set B").split(","))
    
    """ In case you need a set of numbers you may want to do below instead of above two lines"""
    setA = set(map(int,input("Please enter comma seperated elements for the set A").split(',')))
    setB = set(map(int,input("Please enter comma seperated elements for the set B").split(',')))
    
        
    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print( '0: Set Display ')
        print("	1: Union")
        print("	2: Intersection ")
        print("	3: A-B")
        print("	4: B-A")
        print("	5: Take a element from user and Display if that element is a member of set B ")
        print("	6: Display number of elements in the set A")
        print(" 7: Display number of elements in the set B")
        print("	8: Add an element taken from the user to the set A")
        print("	9: Add multiple elements taken from the user to the set A")
        print("	10: Remove an element taken from the user from set A")
        print(" 11: Exit")

        choice = int(input("Please enter your choice "))

        if choice ==0:
            set_display(setA)
            set_display(setB)
        elif choice   ==1:
            set_union(setA,setB) 
        elif choice ==2:
            set_intersection(setA,setB)
        elif choice ==3:
            set_minus(setA,setB)
        elif choice ==4:
            set_minus(setB,setA)
        elif choice ==5:
            is_member_of_set(setB) 
        elif choice ==6:
            set_display(setA)
        elif choice ==7:
            set_display(setB)
        elif choice ==8:
            set_add_element(setA)
        elif choice ==9:
            set_add_elements(setA)
        elif choice ==10:
            set_remove_element(setA)
        elif choice ==11:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")  

my_set_store()   

# Map Function explainataion
int_list= []

# list of strings 
temp_list = input("Please enter comma seperated elements for the set A").split(',')
print(temp_list)

# imperative style 
for i in temp_list:
    int_list.append(int(i))
print(int_list)

# functional style 
int_list1 = list(map(int,temp_list))
print(int_list1)