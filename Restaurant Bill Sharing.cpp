#include <iostream>
using namespace std;
int main()
{
float bill,total_friends;
float s_f_pay;
cout<<"enter the bill of restaurent:";
cin>>bill;
cout<<"enter the number of friends:";
cin>>total_friends;
s_f_pay=bill/total_friends;
cout<<"total friend must pay  "<<s_f_pay<<"rs";
return 0;
}
