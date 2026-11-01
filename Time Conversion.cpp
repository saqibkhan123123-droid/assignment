#include <iostream>
using namespace std;
int main()

{int sec,t_hour,t_min,t_sec,rem;
 cout<<"enter time in seconds";
cin>>sec;
t_hour=sec/3600;
rem=sec%3600;
t_min=rem/60;
t_sec=rem%60;
cout << "Hours: " <<t_hour<<endl;
cout << "Minutes: " <<t_min<<endl;
cout << "Remaining Seconds: " << t_sec<<endl;
return 0;
}
