
# lambda function introduction 
def my_print(string):
    #print("doing something ")
    return 'Hello ' + string

my_lambda_print = lambda string : 'Hello ' + string

print(my_print("Gaurav")    )
print(my_lambda_print("Gaurav"))

