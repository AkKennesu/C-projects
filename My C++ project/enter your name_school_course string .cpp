#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string school;
    string course;
    string sentence;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Enter your school: ";
    cin>>school;

    cout<<"Enter Course: ";
    cin>>course;
    cout<<endl;

    cout<<"Hello "+name+ " you are studying at "+school+ " and your course is "+course<<endl<<endl;

}
