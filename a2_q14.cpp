#include <iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter the number you want the mathematical table for";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        cout<<num <<" * "<<i<<" = "<<num*i ;
        cout<<endl;
    }
    return 0;
}
