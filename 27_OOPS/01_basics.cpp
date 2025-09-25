#include<iostream>
#include<string>
using namespace std;

// class Teacher{
//     // properties / attributes
// private:
//     double salary;
// public:
//     string name;
//     string subject;
//     string dept;
//     Teacher(string name, string subject, string dept, double salary){
//         this->name = name;
//         this->subject = subject;
//         this->dept = dept;
//         this->salary = salary;
//     }

//     double getSalary(){
//         return salary;
//     }
//     void setSalary(double newSalary){
//         salary = newSalary;
//     }
// };

class Student
{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // Student(Student &obj){
    //     cgpaPtr = new double;
    //     this->name = obj.name;
    //     *cgpaPtr = *obj.cgpaPtr;
    // }

    //destructor
    ~Student(){
        cout << "I will delete the memory location\n";
        delete cgpaPtr;
    }
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};


int main(){
    // Teacher t1("Asjad", "Computer Engineering", "okay", 12345);
    // cout << t1.getSalary() << " and name is: " << t1.dept << endl;
    Student s1("Asjad", 8.97);
    s1.getInfo();
    // Student s2(s1);
    // s1.getInfo();
    // *(s2.cgpaPtr) = 9.99;
    // s1.getInfo();
    // s2.getInfo();
    return 0;
}