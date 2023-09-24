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
public:
    string name;
    string company;
    int age;
    /* function inside a class is a class method*/
    void introduce(){
        std::cout << "Name" << name << std::endl;
        std::cout << "company" << company << std::endl;
        std::cout << "age" << age << std::endl;
    }
};

int main()
{
    Employee empl1;// an boject of class Employee
    empl1.name = "Yasitha";
    empl1.age = 55;
    empl1.company = "hellwork";

    empl1.introduce();
}