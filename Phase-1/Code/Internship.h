#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Internship
{
    private:
    string company;
    string role;
    vector<string>requiredskills;
    double mincgpa;
    string eligiblebranch;
    public:
    Internship(string c,string r,vector<string>skills,double m,string b);
    void display();
    vector<string> getrequiredskills();
    double getmincgpa();
    string geteligiblebranch();
};
