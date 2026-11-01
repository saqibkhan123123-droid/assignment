#include <iostream>
using namespace std;
int main()
{
float length,width,height,volume_tank,capacity_litre;
cout<<"enter length of tank:";
cin>>length;
cout<<"enter width of tank:";
cin>>width;
cout<<"enter height of tank:";
cin>>height;
volume_tank=length*width*height;
cout<<"The volume of tank is "<<volume_tank<<"cubic meter"<<endl;
capacity_litre=volume_tank*1000;
cout<<"Tank store "<<capacity_litre<<"litre of water"<<endl;
return 0;
}
