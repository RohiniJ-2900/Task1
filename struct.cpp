#include<iostream>
using namespace std;
struct student 
{
    int id;
    char name[25];
    float cgpa;
};
int main(void)
{
struct student stud[5];
for(int i=0;i<5;i++)
{

cout<<"Enter full name"<<endl;
cin>>stud[i].name;
cout<<"Enter id no"<<endl;
cin>>stud[i].id;
cout<<"Enter cgpa"<<endl;
cin>>stud[i].cgpa;
}
for(int i=0;i<5;i++)
{

cout<<"Name of student is "<<stud[i].name<<endl;
cout<<"ID  is "<<stud[i].id<<endl;
cout<<"CGPA is "<<stud[i].cgpa<<endl;
}
}
