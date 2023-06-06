/* Create demo class and encapsulate all members.*/
#include <iostream>

class Person {
private:
    std::string name;
    int age;
    std::string address;
public:
    void setName(std::string name) 
    {
        this->name = name;
    }
    
    std::string getName() const 
    {
        return name;
    }
    
    void setAge(int age) 
    {
        this->age = age;
    }
    
    int getAge() const 
    {
        return age;
    }
    
    void setAddress(std::string address) 
    {
        this->address = address;
    }
    
    std::string getAddress() const 
    {
        return address;
    }
};

int main() 
{
    Person p1;
    p1.setName("Pranay Vijay Shahare");
    p1.setAge(23);
    p1.setAddress("Armori, Dist.Gadchiroli");
    
    std::cout << "Name: " << p1.getName() << std::endl;
    std::cout << "Age: " << p1.getAge() << std::endl;
    std::cout << "Address: " << p1.getAddress() << std::endl;
    
    return 0;
}

/*In this program, we create a class Person that has three private members: name, age, and address. We then provide public member functions setName(), setAge(), setAddress(), getName(), getAge(), and getAddress() to encapsulate these members and control access to them.

In the main() function, we create an object p1 of type Person, set its name, age, and address using the setName(), setAge(), and setAddress() member functions, respectively, and then print out its values using the getName(), getAge(), and getAddress() member functions.

Encapsulation helps to keep the data and behavior of an object together, and restricts access to the object's internal state from the outside world. This can help prevent unintended modifications to the object's state, and make the code more robust and easier to maintain.*/
