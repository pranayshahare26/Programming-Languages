#include<iostream>

using namespace std;

class student
{
    int sub1;
    int sub2;
    int sub3;
    
    public:
    student()
    {
        sub1 = 40;
        sub2 = 40;
        sub3 = 40;
        cout << "\nInside Constructor\n";
    }
    student(int a)
    {
        sub1 = a;
        sub2 = a;
        sub3 = a;
    }
    void set_marks(int s1, int s2, int s3);
    void display_marks();
    ~student()
    {
        cout << "\nInside Destructor\n";
    }    
};

void student::set_marks(int s1, int s2, int s3)
{
    sub1 = s1;
    sub2 = s2;
    sub3 = s3;    
}

void student::display_marks()
{
    cout << "Subject 1 marks  = " << sub1 << endl;
    cout << "Subject 2 marks  = " << sub2 << endl;
    cout << "Subject 3 marks  = " << sub3 << endl;    
}

int main()
{
    student s1;
    s1.set_marks(60, 70, 80);
    s1.display_marks();
    
    {
        student *s2 = new student(90);
        s2->display_marks();
        delete s2;
    }
    
    cout << "\n Exiting...\n";
}
