
#include <iostream>
#include <string>
using namespace std;

class student{
public:
    string name;
    double* cgpaPtr;

    // this is for shallow copy
    student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double; // here the cgpaPtr is pointing to a new memory location which
        //can only store double value. and this memory is created in heap memory.
        *cgpaPtr = cgpa; // dereferencing the pointer to assign value
         
    }

    //for deep copy we need to create our own deep copy constructor
    student(student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr) ; // deep copy of the pointer
        // this way we are creating a new memory location for cgpaPtr and copying the value from the original object
    }
    

    void getInfo(){
        cout << "Name: " << name << endl <<"CGPA: " << *cgpaPtr << endl;
    }
};


int main() {
    student s1("Ajinkya", 9.38);
    student s2(s1);
    
    cout << "Original Object:" << endl;
    s1.getInfo(); // this will print the original values of s1
    *(s2.cgpaPtr) = 9.5; // modifying the cgpa of s2 using pointer dereferencing
    cout << "After modifying s2's CGPA:" << endl;
    cout << "s1's Info:" << endl;
    s1.getInfo();
    cout << "s2's Info:" << endl;
    s2.getInfo(); 
    /* Here we can see that s1's cgpa remains unchanged to 9.38 where as s2's cgpa is changed to 9.5
    This demonstrates deep copy where both objects have their own separate memory for cgpaPtr. */
    return 0;
}

//proper explanation of why this is happening is written in book. 