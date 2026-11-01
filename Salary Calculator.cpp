#include <iostream>
using namespace std;
int main()
{
	int b_salary,house_rent,medical_allowance,gross_salary;
	cout<<"enter basic salary:";
	cin>>b_salary;
	cout<<"Enter house rent allowance";
	cin>>house_rent;
	cout<<"enter medical allowance";
	cin>>medical_allowance;
	gross_salary=b_salary+house_rent+medical_allowance;
	cout<<"gross salary="<<gross_salary;
	return 0;
}
