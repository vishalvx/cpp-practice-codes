#include "bits/stdc++.h"
using namespace std;

class student
{

    /*
    if do not declere variable as public so by defaultall variables are private and to access variable we need to create public getter and setter method.
    */
    //     int age;
    // string name;
    // int id;
    // bool gender;

    int id = 0;
    //if we do this all can access publicly;

public:
    int age;
    string name;
    bool gender;

    /*compiler create by default   default constructor  
    note :- default constructor do shallow copy*/

    //parameterized constructor
    student(int age, string name, bool gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    // user defined copy constructor
    student(const student &s1)
    {
        this->name = s1.name;
        this->age = s1.age;
        this->gender = s1.gender;
    }
    ~student()
    {
        cout << "student Object deleted." << endl;
    }

    void printInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        if (id)
        {
            cout << "ID : " << id << endl;
        }
        cout << "Gender : " << (gender == 1 ? "male" : "female") << endl;
    }

    int getId()
    {
        return (this->id);
    }
    void setId(int id)
    {
        this->id = id;
    }
    /*
    example of overloading
    here i overload == operetor
    */
    bool operator==(student &s1)
    {
        if (name == s1.name && age == s1.age && gender == s1.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    student s1(20, "vishal", 1);
    student s3(21, "Hardik", 1);
    student s2 = s1;
    if (s1 == s2)
    {
        cout << "S2 and s1 are Same" << endl;
    }
    else
    {
        cout << "S2 and s1 are Not Same" << endl;
    }

    if (s3 == s2)
    {
        cout << "S2 and s3 are Same" << endl;
    }
    else
    {
        cout << "S2 and s3 are  Not Same" << endl;
    }
    s2.setId(24);
    s1.printInfo();
    s2.printInfo();
    return 0;
}