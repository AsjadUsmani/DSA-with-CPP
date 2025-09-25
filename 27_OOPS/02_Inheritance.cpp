#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    // string name;
    int age;

    // Person() {
    //     cout << "Parent's contructor...";
    // }
    // ~Person(){
    //     cout << "Parent's Desructor...";
    // }
};

class Student : public Person {
public:
    int rollno;

    // Student(){
    //     cout << "Student's Constructor...";
    // }
    // ~Student(){
    //     cout << "Student's Destructor...";
    // }
    // void getInfo(){
    //     cout << "Name: " << name << endl;
    //     cout << "Age: " << age << endl;
    //     cout << "Roll No: " << rollno << endl;
    // }
};

class GradStudent : public Student {
    public:
    string name;
    string field;
};

int main(){
    // Student s1;
    // s1.name = "Asjad";
    // s1.age = 21;
    // s1.rollno = 221253;
    // s1.getInfo();
    GradStudent s1;
    s1.name = "Asjad";
    s1.rollno = 221253;
    s1.age = 21;
    s1.field = "Quantum computing";
    cout << s1.name << " " << s1.age << " " << s1.field << " " << s1.rollno << endl;
    return 0;
}