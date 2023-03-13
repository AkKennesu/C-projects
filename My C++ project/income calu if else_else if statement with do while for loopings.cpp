//Income calcu if else/else if statement with do while for loopings
/This Program Is Made by Arn Kenneth Catabay
#include <iostream>

using namespace std;

int main()

{
    int pay, sum, temp;
    char again;
    do{
    cout<<"==============================\n";
    cout<<"Please enter your income: ";
    cin>>pay;
    cout<<"==============================\n";

    if(pay<=2500)
    {
    sum=(00);
    }
    else if(pay>=2500 && pay<=5000)
    {
     sum=((pay0.03)+100);
    }
    else if(pay>=5000 && pay<=10000)
    {
     sum=((pay0.05)+175);
    }
    else if(pay>=10000 && pay<=25000)
    {
    sum=((pay0.08)+425);
    }
    else if(pay>=25000 && pay<=50000)
    {
    sum=((pay0.13)+1625);
    }
    else if(pay>=50000)
    {
    sum=((pay0.25)+4875);
    }
    {
    cout<<"==============================";
    cout<<"\nYour Tax Due:";
    cout<<sum;
    cout<<"\n==============================";
    cout<<"\nRe-enter your Total income to know the total:";
    cin>>temp;
    cout<<endl;
    cout<<"--------------------\n";
    cout<<"Your Total Income:";
    cout<<temp-sum;
    cout<<"\n--------------------\n";
    cout<<endl;
    }
    cout<<"\n\nDo you wish to continue(y or n)"<<endl;
    cin>>again;
    }while(again =='y' ||again == 'Y');

cin.get();
return 0;
}