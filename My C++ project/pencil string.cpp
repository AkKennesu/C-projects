#include <iostream>
#include <string>
using namespace std;

int main()
{
    double quantity, price, ammount, change, payment;
    string pencil;
    string one="Enter product item: ";
    string two="Enter product quantity: ";
    string three="Enter Price: ";
    string four="Total ammount: ";
    string five="Cash Payment: ";
    string six="Your Change: ";

    cout<<one;
    cin>>pencil;

    cout<<two;
    cin>>quantity;

    cout<<three;
    cin>>price;
    cout<<endl;

    ammount=quantity*price;

    cout<<four;
    cout<<ammount<<endl;
    cout<<endl;

    cout<<five;
    cin>>payment;
    cout<<endl;

    change=payment-ammount;

    cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
    cout<<six;
    cout<<change;
    cout<<"\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
    cout<<endl;


    cout<<"\nThank you for purchasing our product come again :D\n\n";

return 0;
}
