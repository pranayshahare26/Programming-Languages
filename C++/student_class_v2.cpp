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
    student(int a, int b, int c)
    {
        sub1 = a;
        sub2 = b;
        sub3 = c;
    }
    void set_marks(int s1, int s2, int s3);
    void set_marks(int s1);
    void set_marks(double s1);
    void set_marks(int s1, int s2);
    void display_marks();
    student operator -(student &s1)
    {
        student s2;
        s2.sub1 =  sub1 - s1.sub1;
        s2.sub2 =  sub2 - s1.sub2;
        s2.sub3 =  sub3 - s1.sub3;
        return s2;
    }
    void operator -()
    {
        sub1 =  -sub1;
        sub2 =  -sub2;
        sub3 =  -sub3;
    }
    
    student operator +(student &s1)
    {
        student s2;
        s2.sub1 =  sub1 - s1.sub1;
        s2.sub2 =  sub2 - s1.sub2;
        s2.sub3 =  sub3 - s1.sub3;
        return s2;
    }
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

void student::set_marks(int s1)
{
    sub1 = s1;
    sub2 = 40;
    sub3 = 40;    
}

void student::set_marks(double s1)
{
    sub1 = s1;
    sub2 = 40;
    sub3 = 40;    
}


void student::set_marks(int s1, int s2)
{
    sub1 = s1;
    sub2 = s2;
    sub3 = 40;    
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
    
    student s3;
    s3.set_marks(60,50);
    s3.display_marks();
    
    {
        student *s2 = new student(70,80,90);
        s2->display_marks();
        delete s2;
    }
    
    
    student s4 = s1 + s3;
    -s4;    
    s4.display_marks();
    student s5 = s4;
    s4.display_marks();

    s5.display_marks();    
    cout << "\n Exiting...\n";
}
