/*Create demo applications to illustrate different types of inheritance*/

#include <iostream>
using namespace std;

class Shape 
{
   public:
      void setWidth(int w) 
      {
         width = w;
      }
   
      void setHeight(int h) 
      {
         height = h;
      }

   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape 
{
   public:
      int getArea() 
      {
         return (width * height);
      }
};

// Derived class
class Square: public Rectangle 
{
   public:
      void setSide(int s) 
      {
         width = s;
         height = s;
      }
};

// Derived class
class Triangle: public Shape 
{
   public:
      int getArea() 
      {
         return (width * height) / 2;
      }
};

int main() 
{
   Rectangle rect;
   rect.setWidth(5);
   rect.setHeight(10);

   // Print the area of the rectangle
   cout << "Rectangle area: " << rect.getArea() << endl;

   Square sq;
   sq.setSide(7);

   // Print the area of the square
   cout << "Square area: " << sq.getArea() << endl;

   Triangle tri;
   tri.setWidth(8);
   tri.setHeight(12);

   // Print the area of the triangle
   cout << "Triangle area: " << tri.getArea() << endl;

   return 0;
}
/*In this program, we have a base class Shape with two protected data members width and height, and two methods to set these values. We then define three derived classes: Rectangle, Square, and Triangle.
Rectangle inherits publicly from Shape, meaning that it can access the protected data members of Shape directly. It adds a public method getArea() to calculate the area of the rectangle.

Square inherits publicly from Rectangle, meaning that it inherits all the data members and methods of Rectangle. It adds a public method setSide() to set the width and height to the same value (since a square has equal sides).

Triangle also inherits publicly from Shape, and it adds a public method getArea() to calculate the area of the triangle using the formula (width * height) / 2.

In main(), we create an object of each derived class, set the appropriate values for the width and height (or side for Square), and call the getArea() method to print out the area of each shape.*/
