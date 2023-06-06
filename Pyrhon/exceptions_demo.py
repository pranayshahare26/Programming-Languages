# exceptions link for reference
# https://docs.python.org/3/library/exceptions.html
# created a custom exception 
class my_custom_exception(Exception):
    pass

def get_details():    
    try:
        d = { 'city' :  'Pune' , 'state' : 'MH'}
        print('city is ' ,  d['city']) 
        # if d['city'] == 'Pune':
        #     raise my_custom_exception
        
        raise ZeroDivisionError
        print('city is ' ,  d['country']) 
        
    except (IndexError , KeyError):
        print(' Index Error occured')
    # except KeyError:
    #     print('Key Error occured')    
    # except Exception:
    #     print('Generic exception occured ')    

def main():
    try:
        get_details()   
        print('Main function executed successfully ')     
    except:
        print('Main failed and exception is handled here  ')     
main()    

