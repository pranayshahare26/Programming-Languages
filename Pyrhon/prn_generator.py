def lucky_student(final_student_list,lucky_student_list):
    is_append = 'N'
    while(is_append == 'N'):
        lucky_student_rollno = final_student_list[ random.randint(1,32)]
        if lucky_student_rollno not in lucky_student_list:
            lucky_student_list.append(lucky_student_rollno)
            print(f"Congratulations Roll no: {lucky_student_rollno} , Show is all yours !!! ")
            is_append = 'Y'

def get_random_question_number(already_solved_questions):
            while True:
                get_number= random.randint(1,40)
                if  get_number not in already_solved_questions:
                    already_solved_questions.append(get_number) 
                    return  get_number
            
import random
lucky_student_list = []
final_student_list = list(range(1,32) ) 
already_solved_questions = []

while(True):
    lucky_student(final_student_list,lucky_student_list)
    print('Question number to solve ' , get_random_question_number(already_solved_questions))
    choice = input("Press Y to exit ").upper()
    if choice == 'Y':
        break