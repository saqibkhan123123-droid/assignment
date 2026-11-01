#include <iostream>
using namespace std;
int main()
{
	int purchase_price,sell_price,total_item,t_p_p,t_s_p,t_p;
	cout<<"enter purchase price";
	cin>>purchase_price;
	cout<<"enter selling price";
	cin>>sell_price;
	cout<<"enter quantity sold";
	cin>>total_item;  
	t_p_p=purchase_price*total_item;
	cout<<"total purchase cost is  "<<t_p_p<<"rs"<<endl;
	t_s_p=sell_price*total_item;
	cout<<"total sell price is "<<t_s_p<<"rs"<<endl;
	t_p=t_s_p-t_p_p;
	cout<<"total profit or loss is  "<<t_p<<"rs"<<endl;
	return 0;
	
}
