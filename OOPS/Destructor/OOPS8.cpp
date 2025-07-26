
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
        cgpaPtr = new double; 
        *cgpaPtr = cgpa; 
    }

    //normal destructor

    ~student(){
         cout <<"I delete everything." << endl;
         delete cgpaPtr; // free the memory allocated for cgpaPtr
    }


    void getInfo(){
        cout << "Name: " << name << endl <<"CGPA: " << *cgpaPtr << endl;
    }
};


int main() {
    student s1("Ajinkya", 9.38);
    s1.getInfo(); 
    return 0;
}

//proper explanation of why this is happening is written in book. 