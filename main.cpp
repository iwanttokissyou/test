#include <iostream>
using std::string;
/*
* class has attributes and behaviours
attributes are things like age and name etc,
behaviours are like things it can do ex: tell the name age and the company
*/

class AbstractEmployee { // this is an abstract class because it has atleast one pure virtual function
    public:
        virtual void AskforPromotion() = 0;
};

class Employee : public AbstractEmployee{
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
    //string Name;  
    string Company;
    int Age;
protected:
    string Name; // in this way, attribute Name will be accecible to the child class by using ".".
public:
    string Gender = "male";
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
    void AskforPromotion(){
        if (Age > 25 ) {
            std::cout << "promoted" << std::endl;
        }else {
            std::cout << "not promoted \n";
        }
    }
    Employee(string name, string company, int age) { /*the sttribute name and function argurements have to be odfferent I dont know why either yet!*/
        Name = name;
        Company = company;
        Age = age;
    }
};

/*
this developer class is inheritaned from Employee class. therefore it will have all the attributes and behviours from the main Employee class.
*/
class developer : public Employee { // if we dont make this public, the object we are going to creat in the main function will not have the access to whatever in the public of main class
    public :
     string Language;
     developer(string name, string company, int age, string lang):Employee(name, company, age){// in this case we have implemented a constructor for Employee we will have to create a constructor for develoer clas as well since it is child class of EMployee and it is going to have the properties of main class
        Language  = lang;
    }
    void work_on_software(){
        std::cout << "working on software using" << Language << "language" << std::endl;
    }

};

class manager : public Employee {
    public :
        string type_of_management;
        manager(string name, string company, int age, string tom) : Employee(name, company, age){
            type_of_management = tom;
        }
        void manage(){
            std::cout << Name << "manage" << type_of_management << std::endl;
        }
};

int main()
{
   /* Employee empl1;// an boject of class Employee aka default constructor if there is no contructor has been made for this class
    empl1.name = "Yasitha";
    empl1.age = 55;
    empl1.company = "hellwork";
*/
 /*   Employee empl1 = Employee("yasitha","hellwork",33);
    Employee empl2 = Employee("mahesh","shitwork",33);
    empl1.introduce();
    empl2.introduce();*/

    

    developer developer_1 = developer("yasitha","hell",22,"python");
    manager manager_1 = manager("wijesinghe","helloffice",99,"HR");

std::cout << "name of the first emplyee is  " << developer_1.Gender << std::endl;

developer_1.introduce();
developer_1.AskforPromotion();

manager_1.introduce();

}