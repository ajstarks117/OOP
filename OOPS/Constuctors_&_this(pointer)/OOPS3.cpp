#include <iostream>
#include <string>
using namespace std;

class Teacher {
    //By default all attributes and methods are private
    //properties / attributes
    
private:    
    
    double salary; 


public: 
    string name;
    string dept;
    string subject;

    //non-parameterized
    // Teacher(){
        //    dept = "Computer Engineering";
        // } // THE NUMBER OF TIMES THE OBJECT IS CREATED THAT MANY TIMES THE CONSTRUCTOR GETS CALLED.
        // // MOSTLY it can be used to initialize default values.
        
    //parameterized
        Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    } /* since the function parameters and the object properties have same name so in order to tell the compiler that the left 
    properties belong to the object we use {this} pointer. */ 



    
    //methods/member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    //below we are accessing the salary attribute indirectly using the public setter and getter function.

    //setter fuction
    void setSalary(double s){
        salary = s;
    }

    //getter fuction
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout << name << endl << dept << endl << subject << endl << getSalary() << endl;
    }

};


int main() {

    Teacher t1("Ajinkya", "Computer Engineering", "OOPS", 10000); 

    Teacher t2(t1); //by default it calls the inbuilt copy constructor and copies all the stored data at memory location of object 1 to object2
    t2.getInfo();
    



    return 0;
}