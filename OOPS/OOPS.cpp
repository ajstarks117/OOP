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
    // They don't have a return type or value.
    Teacher(){
       dept = "Computer Engineering";
    } // THE NUMBER OF TIMES THE OBJECT IS CREATED THAT MANY TIMES THE CONSTRUCTOR GETS CALLED.
    // MOSTLY it can be used to initialize default values.

    Teacher(string n, string d, string s, double sal){
        
    }


    string name;
    string dept;
    string subject;
    string position;

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

    Teacher t1; // here t1 is the object for class Teacher. 
    //and now it has all the attributes related to Teacher class.
    //here it has also called the constructor upon object creation.

    t1.name = "Neeraj";
    t1.dept = "Aeronautics";
    t1.subject = "Physics";
    t1.position = "Senior Faculty";
    t1.setSalary(70000); //calling setSalary method on t1 object of teacher class to access salary(private) attribute indirectly

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;



    return 0;
}