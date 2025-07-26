#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age; //since each person has a these two attributes commonly

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        cout <<"Parent constructor..." << endl;
    }

    ~Person(){
        cout << "Parent destructor..." << endl;
    }

};

class Student : public Person { // inheriting from Person class in public mode
    //now a student generally has a name, age and a roll number.
    // but instead of creating new attributes for this class, we can inherit the Person class
public:
    int rollNo;

    Student(){
        cout <<"Child constructor..." << endl;
    }
    //here the constuctor of the parent class is called first and then the child class constructor is called.
    // this is called constructor chaining.

    ~Student(){
        cout << "Child destructor..." << endl;
    }
    // destructor of the child class is called first and then the parent class destructor is called.
    // this is called destructor chaining.

    void getInfo(){
        cout << "Name: " << name << endl;  /*here though the name and age is not defined in the student class still we don't
        get any error.*/
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }

};


int main(){
    Student s1;
    s1.name = "Ajinkya"; // setting name from Person class
    s1.age = 20; // setting age from Person class
    s1.rollNo = 36; // setting roll number from Student class
    s1.getInfo(); // calling getInfo method to print details 
    return 0;
}