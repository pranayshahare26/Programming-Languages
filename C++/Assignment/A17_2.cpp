/*Create demo applications to illustrate different types of inheritance*/

#include <iostream>
using namespace std;

// Base class
class Vehicle 
{
   public:
      void startEngine() 
      {
         cout << "Engine started." << endl;
      }

      void stopEngine() 
      {
         cout << "Engine stopped." << endl;
      }
};

// Derived class with single inheritance
class Car : public Vehicle 
{
   public:
      void drive() 
      {
         cout << "Driving..." << endl;
      }

      void park() 
      {
         cout << "Parked." << endl;
      }
};

// Derived class with multiple inheritance
class AmphibiousVehicle 
{
   public:
      void enterWater() 
      {
         cout << "Entering water..." << endl;
      }

      void exitWater() 
      {
         cout << "Exiting water..." << endl;
      }
};

class AmphibiousCar : public Car, public AmphibiousVehicle 
{
   public:
      void navigateWater() 
      {
         enterWater();
         cout << "Navigating water..." << endl;
         exitWater();
      }
};

// Derived class with multilevel inheritance
class LuxuryCar : public Car 
{
   public:
      void cruise() 
      {
         cout << "Cruising..." << endl;
      }
};

class SportsCar : public LuxuryCar 
{
   public:
      void race() 
      {
         cout << "Racing!" << endl;
      }
};

int main() 
{
   // Demonstrate single inheritance
   Car myCar;
   myCar.startEngine();
   myCar.drive();
   myCar.stopEngine();

   // Demonstrate multiple inheritance
   AmphibiousCar myAmphibiousCar;
   myAmphibiousCar.startEngine();
   myAmphibiousCar.drive();
   myAmphibiousCar.navigateWater();
   myAmphibiousCar.stopEngine();

   // Demonstrate multilevel inheritance
   SportsCar mySportsCar;
   mySportsCar.startEngine();
   mySportsCar.cruise();
   mySportsCar.race();
   mySportsCar.stopEngine();

   return 0;
}

/*In this program, we have a base class Vehicle with two public methods startEngine() and stopEngine(). We then define three derived classes: Car, AmphibiousVehicle, and LuxuryCar.

Car inherits publicly from Vehicle using single inheritance. It adds two public methods drive() and park().

AmphibiousVehicle adds two public methods enterWater() and exitWater().

AmphibiousCar inherits publicly from both Car and AmphibiousVehicle using multiple inheritance. It adds a public method navigateWater() that calls enterWater(), navigates the water, and then calls exitWater().

LuxuryCar inherits publicly from Car using multilevel inheritance. It adds a public method cruise().

SportsCar inherits publicly from LuxuryCar using multilevel inheritance. It adds a public method race().

In main(), we create objects of each derived class and call their public methods to demonstrate the different types of inheritance. We first create a Car object and call its startEngine(), drive(), and stopEngine() methods. We then create an AmphibiousCar object and call its startEngine(), drive(), navigateWater(), and stopEngine() methods. Finally, we create a SportsCar object and call its startEngine(), cruise(), race(), and `*/