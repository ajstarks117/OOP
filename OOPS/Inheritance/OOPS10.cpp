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

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }


};

class Student : public Person { // inheriting from Person class in public mode
    //now a student generally has a name, age and a roll number.
    // but instead of creating new attributes for this class, we can inherit the Person class
public:
    int rollNo;

    //In order to call the parameterized constructor of the parent class, we can use an initializer list.
    Student(string name, int age, int rollNo) : Person(name, age){
        this->rollNo = rollNo;
    }


    void getInfo(){
        cout << "Name: " << name << endl;  /*here though the name and age is not defined in the student class still we don't
        get any error.*/
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }

};


int main(){
    Student s1("Ajinkya", 20, 36);
    
    s1.getInfo(); 
    return 0;
}