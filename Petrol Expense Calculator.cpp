#include <iostream>
using namespace std;
int main()
{ float distance,kpl,price_of_petrol,petrol_c,petrol_cost;
	cout<<"enter distance cover in km:";
	cin>>distance;
	cout<<"Enter average fuel consumption in km per litre:";
	cin>>kpl;
    cout<<"Enter price of fuel per litre:";
    cin>>price_of_petrol;
    petrol_c=distance/kpl;
    cout<<"total petrol consumed is "<<petrol_c<<" litre"<<endl;
    petrol_cost=petrol_c*price_of_petrol;
    cout<<"total cost of fuel is :"<<petrol_cost;
    return 0;
}
