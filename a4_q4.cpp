#include <iostream>
using namespace std;
int main(){
    int low, high,i,j,count;
    cout<<"Enter the lower limit"<<endl;
    cin>>low;
    cout<<"Enter the upper limit"<<endl;
    cin >> high;
    for ( i = low; i <=high; i++)
    {
        count=0;
       for (j= 1; j<= i; j++)
       {
        if(i%j==0)
        count++;
       }
       if (count==2)
       {
        cout<<i<<endl;
       }
       
    }
}
