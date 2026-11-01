#include <iostream>
using namespace std;
int main()
{ float unit_price,number_units,total_bill;
cout<<"Enter number of units:";
cin>>number_units;
cout<<"Enter unit price:";
cin>>unit_price;
total_bill=number_units*unit_price;
cout<<"total bill:"<<total_bill;
return 0;
}
