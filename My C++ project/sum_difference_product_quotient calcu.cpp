#include <iostream>

using namespace std;

int main()

{
int n1, n2, add, sub, multi;
float div;

cout<< "Enter a number: ";
cin>>n1;
cout<< "Enter another number: ";
cin>> n2;

add = n1 + n2;
sub = n1 - n2;
multi = n1 * n2;
div = n1 / n2;

cout<<"Sum = ";
cout<<add;
cout<<endl;

cout<<"Difference = ";
cout<<sub;
cout<<endl;

cout<< "Product = " ;
cout<< multi;
cout<<endl;

cout << "Quotient = " ;
cout<<div;
cout<<endl;

return 0;

}
