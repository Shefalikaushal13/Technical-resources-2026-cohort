#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){

   int  i,j,k,space,n;
   cout<<"Enter number of rows you want in the pattern: ";
   cin>>n;
   space = n - 1;
   cout<<"\n";
   
   for  (i = 1; i <= n; i++)
   {
      for  (j = 1; j<= space; j++)
         cout<<" ";
         
      space--;
      for  (k = 1; k <= 2 * i - 1; k++)
         cout<<"*";
      cout<<"\n";
   }
   
   space = 1;
   for  (i = 1; i<= n - 1; i++)
   {
      for  (j = 1; j <= space; j++)
         cout<<" ";
      space++;
      for  (k = 1 ; k <= 2 * (n - i) - 1; k++)
         cout<<"*";
      cout<<"\n";
   }
    
    return 0;
}


int main(){
   
