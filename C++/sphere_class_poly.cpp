#include<iostream>

using namespace std;

class shape
{
protected:
    float radius;
public:
    shape()
    {
        cout <<"\n inside shape constructor " << endl;
    }
    void set_radius(float r)
    {
        radius = r;    
    }
    float get_radius()
    {
        return radius;    
    } 
    virtual void display_data()=0;
    ~shape()
    {
        cout <<"\n inside shape destructor " << endl;
    }   
};

class circle : public shape
{
    float area;
public:
    circle()
    {
        cout <<"\n inside circle constructor " << endl;
    }
    void calc_area()
    {
        area = 3.14 * radius * radius;
    }
    float get_area()
    {
        return area;
    }
    void display_data()
    {
        cout << "\n radius = " << radius;
        cout << "\n area = " << area;
    }
    ~circle()
    {
        cout <<"\n inside circle destructor " << endl;
    }
};

class sphere : public circle
{
    float volume;
public:
    sphere()
    {
        cout <<"\n inside sphere constructor " << endl;
    }
    void calc_volume()
    {
        volume = 4.0 / 3.0 * 3.14 * radius * radius * radius;
    }
    void display_volume()
    {
        std::cout << "\n Volume = " << volume << endl;
    }
    void display_data()
    {
        cout << "\n radius = " << radius;
        cout << "\n volume = " << volume;
    }
    ~sphere()
    {
        cout <<"\n inside sphere destructor " << endl;
    }
};

int main()
{
    sphere s1;
    
    s1.set_radius(1.0);
    s1.calc_area();
    s1.calc_volume();
    
    shape *s2 = &s1;
    s2->display_data(); 
}

