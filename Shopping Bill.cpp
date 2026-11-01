#include <iostream>
using namespace std;

int main()
{
    int notebook_price, notebook_quantity;
    int pen_price, pen_quantity;
    int total_bill;

    cout << "Enter notebook price: ";
    cin >> notebook_price;

    cout << "Enter notebook quantity: ";
    cin >> notebook_quantity;

    cout << "Enter pen price: ";
    cin >> pen_price;

    cout << "Enter pen quantity: ";
    cin >> pen_quantity;

    total_bill = (notebook_price * notebook_quantity) + (pen_price * pen_quantity);

    cout << "Total Bill = Rs. " << total_bill<<"rs";

    return 0;
}
