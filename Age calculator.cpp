#include <iostream>
using namespace std;
int main()
{int age_y,age_m,age_w,age_d;
cout<<"enter your age in year";
cin>>age_y;
age_m=age_y*12;
age_w=age_y*52;
age_d=age_y*365;
cout<<"age in months :"<<age_m<<"months"<<endl;
cout<<"age in weeks :"<<age_w<<"weeks"<<endl;
cout<<"age in days :"<<age_d<<"days"<<endl;
return 0;
}
