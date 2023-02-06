#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int row;
    cout<<"Enter numbers of row : ";
    cin>>row;
    for(int i =1 ; i<=row;i++){
        for(int j = 1 ; j<=i ; j++){
            if (i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
 
    return 0;
}
