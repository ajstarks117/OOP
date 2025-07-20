#include <iostream>
#include <string>
using namespace std;

class student{
public:
    string name;
    double cgpa;

    student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo(){
        cout << "Name: " << name << endl <<"CGPA: " << cgpa << endl;
    }
};


int main() {
    student s1("Ajinkya", 9.38);
    
    student s2(s1);
    //copy constructor is called here
    // s2 is a new object created with the same values as s1
    s2.getInfo(); // this is an example of shallw copy, where s2 is a separate object with its own memory allocation.


    return 0;
}

// all these things are working on the statically allocated memory.
