#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter the number of lines you want in your pattern";
 cin>>n;

 for (int row= 1; row <= n; row++)
 {
     for (int col = 1; col <= row; col++)
       {
         cout<<"* ";
       }
       cout<<endl;
   }
}
