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
public:
    string Name;  
    string Company;
    int Age;

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
}