//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int first;
int second;
int biggest;
  
    cout<<"Please enter a whole number:\n";

    cin>>first;
      
    cout<<"Please enter another whole number:\n";

    cin>>second;

    if(first>second)
    {
    biggest=first;
    }
    else
    {
    biggest=second;
    }

    cout<<"Of those two numbers, the biggest is: "<<biggest;
    cout<<endl<<"Thank you for playing.\n";

return 0;
}
