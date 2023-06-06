class Student:
    # class variables 
    institute_name = 'CDAC'
    
    #class method
    @classmethod
    def change_institute_name(cls,in_new_institute_name):
        cls.institute_name = in_new_institute_name

    @classmethod
    def get_institute_name(cls):
        return cls.institute_name 
    
    # static method
    @staticmethod
    def facilities_provided():
        print('Facilities are Gym,Library etc')    
        
    # initialiser 
    def __init__(self,in_name,in_rollno,in_subject):
        # instance variables 
        self.name = in_name
        self._roll_no = in_rollno
        self.__subject_enrolled = in_subject
    
    # instance method     
    def display_details(self):
        print(f'{self.name}-->{self._roll_no}--> {self.__subject_enrolled}')
    
    # instance method
    def enroll(self,in_new_subject):
        self.__subject_enrolled = in_new_subject
    
    # instance method
    def unenroll(self):
        self.__subject_enrolled = None




class Student_CAP(Student):
    # initialiser 
    def __init__(self,in_name,in_rollno,in_subject , in_additional_skill_set):
        super().__init__(in_name,in_rollno,in_subject)
        self.additional_skill_set = in_additional_skill_set
    
    # instance method     # overriding 
    def display_details(self):
        super().display_details()
        print(f'{self.additional_skill_set}')
    
