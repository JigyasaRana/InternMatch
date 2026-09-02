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
    void input()
    {
        cout<<"\nEnter Name:";
        getline(cin,name);
        cout<<"\nEnter Branch:";
        getline(cin,branch);
        cout<<"\nEnter year:";
        cin>>year;
        cout<<"\nEnter CGPA:";
        cin>>cgpa;
        cin.ignore(); 
        cout<<"\nEnter Skills in Comma Separated Format:";
        getline(cin,skill);
        stringstream ss(skill);
        string oneskill;
        while(getline(ss,oneskill,','))
        {
            skills.push_back(oneskill);
        }
    }
    void display()
    {
        cout<<"\nName:"<<name;
        cout<<"\nBranch:"<<branch;
        cout<<"\nYear:"<<year;
        cout<<"\nCGPA:"<<cgpa;
        cout<<"\nSkills:";
        for(int i=0;i<skills.size();i++)
        {
            cout<<skills[i];
            if(i<skills.size()-1)
            {
                cout<<", ";
            }
        }
        cout<<endl;
    } 
};