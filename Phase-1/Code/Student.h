#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
class Student
{
    private:
    string name;
    string branch;
    int year;
    double cgpa;
    string skill;
    vector<string>skills;
    public:
    void input();
    void display();
    string getbranch();
    double getcgpa();
    vector<string> getskills();
};