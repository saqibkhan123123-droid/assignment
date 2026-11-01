#include <iostream>
using namespace std;
int main()
{
int phy,chem,urdu,eng,com;
float obtain_marks, avg,percen;
	cout<<"Enter marks of physics:";
	cin>>phy;
	cout<<"Enter marks of chemistry:";
	cin>>chem;
    cout<<"Enter marks of urdu:";
    cin>>urdu;
    cout<<"Enter marks of english:";
    cin>>eng;
    cout<<"Enter marks of computer:";
    cin>>com;
    const int total_marks=500;
    obtain_marks=phy+chem+urdu+eng+com;
    cout<<"obtain marks:"<<obtain_marks<<endl;
    avg=(phy+chem+urdu+eng+com)/5;
    cout<<"average number:"<<avg<<endl;
    percen=(obtain_marks/total_marks)*100;
    cout<<"total:percentage"<<percen<<endl;
    return 0;
}
    
