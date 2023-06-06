#include<iostream>

using namespace std;

class shape
{
protected:
    float radius;
public:
    void set_radius(float r)
    {
        radius = r;    
    }
    float get_radius()
    {
        return radius;    
    }    
};

class circle : public shape
{
    float area;
public:
    void calc_area()
    {
        area = 3.14 * radius * radius;
    }
    float get_area()
    {
        return area;
    }
};

class sphere : public circle
{
    float volume;
public:
    void calc_volume()
    {
        volume = 4.0 / 3.0 * 3.14 * radius * radius * radius;
    }
    void display_volume()
    {
        std::cout << "\n Volume = " << volume << endl;
    }
};

int main()
{
    sphere s1;
    s1.set_radius(1.0);
    s1.calc_volume();
    s1.display_volume();
}

