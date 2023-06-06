import re
# [] . ^ $ * + ? {} () \ |

"""
--------------------------------
Exercises -- Regular Expressions
-------------------------------
Given the list of strings as input :

gaurav1234@gmail.com
pratik190900234@gmail.com
2009_rocking_person@yahoo.com
GodFather2022@yahoo.com
Brocklesner_89_WWE@yahoo.com
TheRock_WWE@yahoo.com
JohnCena_WWE@yahoo.com
Undertaker_Roman_reigns@outlook.com
6789764666@rediffmail.com
Kane#6789@gmail.com


1) provide me the list of emails that do have special characters of #~`!
2) provide me the list of emails that start with numbers
3) provide me the list of emails that start with numbers followed by an underscore
4) provide me the list of emails that start with numbers followed by an underscore or small case characters
5) provide me the list of emails that start with numbers followed by an underscore or small case characters or large case characters
6) Provide me list of emails with only numbers before the @
7) Provide me list of emails with numbers anywhere before the @

"""

#---------------------------------------------
#*** Solutions to above Exercise ***
#---------------------------------------------


import re
string1 = 'gaurav1234@gmail.com'
string2 = 'pratik190900234@gmail.com'
string3 = '2009_rocking_person@yahoo.com'
string4 = 'GodFather2022@yahoo.com'
string5 = 'Brocklesner_89_WWE@yahoo.com'
string6 = 'TheRock_WWE@yahoo.com'
string7 = 'JohnCena_WWE@yahoo.com'
string8 = 'Undertaker_Roman_reigns@outlook.com'
string9 = '6789764666@rediffmail.com'
string10 = 'Kane#6789@gmail.com'

my_list = [string1,string2,string3,string4,string5,string6,string7,string8,string9,string10]


# 1) provide me the list of emails that do have special characters of #~`!
# pattern = '.*[#~`!].*'
# 2) provide me the list of emails that start with numbers
# pattern = '^\d+.*'
# 3) provide me the list of emails that start with numbers followed by an underscore
# pattern = '^\d+_.*'
# 4) provide me the list of emails that start with numbers followed by an underscore or small case characters
# pattern = '^\d+[_a-z]+.*'
# 5) provide me the list of emails that start with numbers followed by an underscore or small case characters or large case characters
# pattern = '^\d+[_a-zA-Z]+.*'
# 6) Provide me list of emails with only numbers before the @
# pattern = '^\d+@.*'
# 7) Provide me list of emails with numbers anywhere before the @
# pattern = '.*\d+@.*'

# print(f"Following are the email ids matching the pattern {pattern}")
# for test_string in my_list:
#     result = re.search(pattern, test_string)  
#     if result:
#         print("Email Id :" , result.group(0))

# understangin match and search functions in re module 
test_string = 'test12345@gmail.com'
pattern = '\d+@.*'
result_from_search = re.search(pattern, test_string)  
print(result_from_search)
print(result_from_search.string) # get the matched string 
print(result_from_search.group(0)) # get the pattern matched string 
result_from_match = re.match(pattern, test_string)  
print(result_from_match)