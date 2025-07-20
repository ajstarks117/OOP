#include <iostream>
#include <string>
using namespace std;

class student{
public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double; // here the cgpaPtr is pointing to a new memory location which
        //can only store double value. and this memory is created in heap memory.
        *cgpaPtr = cgpa; // dereferencing the pointer to assign value
         
    }

    void getInfo(){
        cout << "Name: " << name << endl <<"CGPA: " << *cgpaPtr << endl;
    }
};


int main() {
    student s1("Ajinkya", 9.38);
    student s2(s1);
    
    s1.getInfo(); // this will print the original values of s1
    *(s2.cgpaPtr) = 9.5; // modifying the cgpa of s2 using pointer dereferencing
    s1.getInfo(); /* Here we can see that s1's cgpa gets changed to 9.5 as well
    by changing the value at root level, thus demonstrating shallow copy where both objects share the same memory for cgpaPtr. */
    return 0;
}

//proper explanation of why this is happening is written in book. 