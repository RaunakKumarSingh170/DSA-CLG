#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age,roll_no;
    string grade;
};
int main()
{
    Student S1;
    S1.name="Raunak";
    S1.age=20;
    S1.roll_no=265;
    S1.grade="A+";
    cout<<"age" <<S1.age<<endl;

    Student S2;
    S2.name="OmPatel";
    S2.age=19;
    S2.roll_no=266;
    S2.grade="B+";
    cout<<"roll_no" <<S2.roll_no<<endl;
    return 0;
}
