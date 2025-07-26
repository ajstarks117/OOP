#include <iostream>
#include <string>
using namespace std;

class Teacher {
    //By default all attributes and methods are private
    //properties / attributes
    
private:    
    // here usually to keep the salary private from outside world we can keep the some attributes private for that class and can be used via a function this way keeping the 
    // salary safe and only accessible through getter/setter methods/functions.
    double salary; // In one way it is data hiding.


public: 
    string name;
    string dept;
    string subject;

    //non-parameterized
    // // They don't have a return type or value.
    // Teacher(){
        //    dept = "Computer Engineering";
        // } // THE NUMBER OF TIMES THE OBJECT IS CREATED THAT MANY TIMES THE CONSTRUCTOR GETS CALLED.
        // // MOSTLY it can be used to initialize default values.
        
    //parameterized
        Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }


    
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

};


int main() {

    Teacher t1("Ajinkya", "Computer Engineering", "OOPS", 10000); // now since we have defined a parameterized constructor
    //is defined we can directly assign values without using t1.attribute.

    cout << t1.name << endl << t1.dept << endl << t1.subject << endl << t1.getSalary() << endl;
    



    return 0;
}