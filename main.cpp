#include <iostream>
using std::string;
/*
* class has attributes and behaviours
attributes are things like age and name etc,
behaviours are like things it can do ex: tell the name age and the company
*/

class Employee {
    /*
        by default all the attributes will be private otheriwse speicifed
        so the attributes should be public if we dont use cnotructors or  gets and sets functions
    */

    /*
    there are three ccess modifiers, public,private and protected
    private are only accessible inside the class, 
    public are only accessible anywhere
    */
   /*
   ****THREE RULES OF CONSTRUCTORS
    1. A METHOD, BUT DOES NOT HAVE A RETURN 
    2. IT WILL HAVE THE SAME NAME AS CLASS
    3. SHOULD BE PUBLIC, THERE ARE SOME CASES CONSTRUCTORS CAN BE PRIVATE
   */ 

    /* function inside a class is a class method*/
private: // in this way we have hidden these three variables aka encapsulated, if we want to access or modifiy the data we will have to impliment the functions for these data aka we will have to implement setters and getters
    string Name;  
    string Company;
    int Age;
public:
    void setName (string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void introduce(){
        std::cout << "Name " << Name << std::endl;
        std::cout << "company " << Company << std::endl;
        std::cout << "age " << Age << std::endl;
    }
    Employee(string name, string company, int age) { /*the sttribute name and function argurements have to be odfferent I dont know why either yet!*/
        Name = name;
        Company = company;
        Age = age;
    }
};


/*concept of virtual functions*/
class base {
    public:
        virtual void print()=0; // this is a pure virtual function and then this base class become an abstrct class, a class is an abstract class if there is atleast one pure virtual function
};

class derive : public base {
    public: 
        void print() {
            std::cout << "print this derive\n";    
        }
        void show() {
            std:: cout << "show this derive\n";
        } 
};

int main()
{
   /* Employee empl1;// an boject of class Employee aka default constructor if there is no contructor has been made for this class
    empl1.name = "Yasitha";
    empl1.age = 55;
    empl1.company = "hellwork";
*/
    Employee empl1 = Employee("yasitha","hellwork",33);
    Employee empl2 = Employee("mahesh","shitwork",33);
    empl1.introduce();
    empl2.introduce();

    std::cout << "name of the first emplyee is  " << empl1.getName() << std::endl;

    base* base_class_pointer;
    derive derive_class;
    base_class_pointer = &derive_class;

    base_class_pointer -> print();
    //base_class_pointer -> show();

}