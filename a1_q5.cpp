#include <iostream>
using namespace std;

int main(){
    int n,d=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while (n!=0)
    {
        n=n/10;
        d++;
    }
    cout<<"Number of digits in the input number are "<<d;
    return 0;
}
    
