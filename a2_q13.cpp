#include<iostream>
using namespace std;
int main(){
    int n,i,j,number,sum;
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++){
        number=1;
        for(j=0;j<=i;j++)
        {
            cout<<number<<"\t";
            sum=(number*(i-j))/(j+1);
            number=sum;
        }
        cout<<"\n";
    }
    return 0;
}
