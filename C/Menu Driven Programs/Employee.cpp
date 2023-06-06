/*C++ menu driven program for an employee(by name and ID number). The menu contains following fumctions:-
1.Add
2.Search
3.Display
4.Update
5.Delete
6.Sort
7.Quit
*/
#include<bits/stdc++.h>
using namespace std;
int n,i,key,pos,val,j,temp;
void add();
void search();
void display();
void update();
void del();
void sort();

struct employee
{
    string name;
    int id;
}emp[50];

void add()
{
    cout << "Enter the number of records to be added: ";
    cin >> n;
    cout << "Enter the record" << endl;
    for (i=0;i<n;i++)
    {
        cout<<"enter name: ";
        cin>>emp[i].name;
        cout<<"enter id: ";
        cin>>emp[i].id;
    }
}

void search()
{
    int id;
    cout<<"\nEnter the id to be searched:\t";
    cin>>id;
    for(i=0;i<n;i++)
    {
        if(emp[i].id==id)
        {
            cout<<"\nThe employee is "<< emp[i].name << " " <<emp[i].id;
            break;
        }
    }
    if(i==n)
    {
        cout<<"\nThe search is unsuccessful";
    }
}

void display()
{
    int i;
    cout<<"\n name and id of employee are :\n";
    for(i=0;i<n;i++){
        cout << "Name = " << emp[i].name << ", ID = " << emp[i].id << endl;         
    }
}
 
void update()
{    
    int loc,id;
    string name;
    cout<<"Enter location : ";
    cin>>loc;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter ID: ";
    cin>>id;
    emp[loc-1].name=name;
    emp[loc-1].id= id;
    cout<<"\nemployee Updated";
    cout<<"\nNew emp list : \n";
    for(i=0;i<n;i++)
    cout << "Name = " << emp[i].name << ", ID = " << emp[i].id << endl;
}

void del()
{
    cout<<"\nEnter the position of the employee to be deleted:\t";
    cin>>pos;
    val=emp[pos-1].id;
    string temp_str = emp[pos-1].name;
    for(i=pos-1;i<n-1;i++)
    {
        emp[i].name=emp[i+1].name;
        emp[i].id=emp[i+1].id;
    }
    n=n-1;
    cout<<"\nThe deleted employee id is = " << val << "(" << temp_str << ")";
}

void sort()
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)                 
        {                         
            if((emp[j].name).compare(emp[j+1].name) > 0 || ((emp[j].name).compare(emp[j+1].name) == 0 && (emp[j].id>emp[j+1].id)))
            {
                temp=emp[j].id;
                emp[j].id=emp[j+1].id;
                emp[j+1].id=temp;

                string temp_str = emp[j].name;
                emp[j].name=emp[j+1].name;
                emp[j+1].name=temp_str;
            }
        }
    }
    display();
}

int main()
{
    int choice;
    do{
        cout<<"\n--------Menu-----------\n";
        cout<<"1.Add\n";
        cout<<"2.Search\n";
        cout<<"3.Display\n";               
        cout<<"4.update\n";
        cout<<"5.Delete\n";
        cout<<"6.Sort\n";
        cout<<"7.Exit\n";
        cout<<"-----------------------";
        cout<<"\nEnter your choice:\t";
        cin>>choice;
        switch(choice)
        {
            case 1:         
                add();
                break;
            case 2:
                search();
                break;
            case 3:
                display();
                break;
            case 4:
                update();
                break;
            case 5:
                del();
                break;
            case 6:
                sort();
                break;
            case 7:
                exit(0);
                break;
            default:
                cout<<"\nInvalid choice:\n";
                break;
        }
    }while(choice!=7);
    return 0;
}