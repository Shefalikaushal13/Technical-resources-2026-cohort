#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
    int sp=n/2,st=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        for(int j=1;j<=st;j++){
            if(j==1 || j==st){
                cout<<"*";
            }
          else{
                cout<<" ";
            }
        }
        if(i<=n/2){
            sp--;
            st=st+2;
        }
        else{
            sp++;
            st=st-2;
        }
        cout<<endl;
    }
    return 0;
}
