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
    float mincgpa;
    string eligiblebranch;
    public:
    Internship(string c,string r,vector<string>skills,float m,string b)
    {
        company=c;
        role=r;
        requiredskills=skills;
        mincgpa=m;
        eligiblebranch= b;
    }
    void display()
    {
        cout<<"\nCompany Name:"<<company;
        cout<<"\nRole:"<<role;
        cout<<"\nRequired Skills:";
        for(int i=0;i<requiredskills.size();i++)
        {
            cout<<requiredskills[i];
            if(i<requiredskills.size()-1)
            {
                cout<<", ";
            }
        }
        cout<<"\nMinimum CGPA:"<<mincgpa;
        cout<<"\nEligible Branches:"<<eligiblebranch;
    }
};
