# # read a json , check an element in the json , if present print else write it to the file 
# import json 

# # reading the json file from disk 
# with open("colour_scheme.json", "r") as f:
#     info = json.load(f)

# # converting the key to integer values 
# info_duplicate = {}
# for key,value in info.items():
#     info_duplicate[int(key)] = value

# # take input colour_code from the user and print the colour if it is present
# # else write the new colour code with its colour to the file 
# colour_code  = int(input("Enter colour code:"))
# colour_name  = info_duplicate.get(colour_code)

# if colour_name:
#     print('Colour in the dictionary is ',colour_name)
# else:
#     info_duplicate[colour_code]    =  input('Colour name please :')
#     # writing the modified dictionary back to the disk 
#     with open("colour_scheme.json", "w") as f:
#         json.dump(info_duplicate , f)    


# print(info_duplicate)    

# # List Less Than Ten 
# # write a program that prints out all the elements of the list that are less than 5.

# list_of_int = map(int,input('Enter comma seperated numbers').split(','))
# output_list_less_than_5 = []

# for elem in list_of_int:
#     if elem < 5 : 
#         output_list_less_than_5.append(elem)

# print(output_list_less_than_5)

# explore list comprehension if interested 
#print([elem for elem in map(int,input('Enter comma seperated numbers').split(',')) if elem < 5 ])

# Exercise 1 (and Solution)
# Create a program that asks the user to enter their name and their age. 
# Print out a message addressed to them that tells them the year 
# that they will turn 100 years old.        

# import datetime
# print(f"You will turn 100 years old in year :{datetime.date.today().year + (100 - int(input('Please enter your age ')))}")


#Exercise 6 (and Solution)
#Ask the user for a string and print out whether this string is a palindrome or not. 
# (A palindrome is a string that reads the same forwards and backwards.)

# #Hangman exercise series
# """
#  In the game of Hangman, a clue word is given by the program that 
#  the player has to guess, letter by letter. 
#  The player guesses one letter at a time until the entire word has been guessed.
#  (In the actual game, the player can only guess 6 letters incorrectly before losing).
# """
# import random
# films = ["Hangman","Hera Pheri","Pathaan","Masti","Karma","Pushpa","PK","Padhmavath","Rockstar","Sairat","Murder"]
# film_to_guess = films[random.randint(0,len(films)-1)]
# print(film_to_guess)

# incorrect_guess_cntr = 0 
# temp_film_list = ['-']*len(film_to_guess)

# while True:
#     guessed_character = input('Guess your letter').lower()
#     is_guess_correct = False    
#     if guessed_character.lower() in film_to_guess.lower():
#         subscript = 0 
#         for character in film_to_guess.lower():
#             if character == guessed_character:
#                 temp_film_list[subscript] = film_to_guess[subscript] 
#                 is_guess_correct = True
#             subscript +=1 
        
#     if is_guess_correct:    
#         print('You guessed it right : ',''.join(temp_film_list))
#     else :
#         incorrect_guess_cntr +=1 
#         print(f"Wrong Guess with {guessed_character}:{''.join(temp_film_list) }" )
#         if incorrect_guess_cntr > 5 :
#             print("You lost !!!! ")
#             break

#     if ''.join(temp_film_list) == film_to_guess:    
#         print("You Won !!!! ")
#         break
    
# Check Tic Tac Toe 
game = [[0,0,0],[0,0,0],[0,0,0]]
user_token = ['u1','u2']
game_counter = 0 
while(True):
    current_user = user_token[game_counter%2]
    print(f"Welcome {current_user} its your turn now !")
    
    row = int(input("enter row number"))
    column = int(input("enter column number"))

    if game[row][column] not in user_token:
        game[row][column]= current_user
        game_counter+=1
    else:
        print("You are not allowed to place your sign here ")    
    
    print(game)
    
    is_winner = True
    for i in range(0,3):
        for j in range(1,3) :
            if game[i][i] != game [i][j]:
                is_winner = False 

    for j in range(0,3):
        for i in range(1,3) :
            if game[i][i] != game [i][j]:
                is_winner = False                 
    print(is_winner )
    if is_winner:
        print(game)
        print(f"{current_user} Won the game ")
        break             