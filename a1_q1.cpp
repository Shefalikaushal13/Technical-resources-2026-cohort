#include<iostream>
using namespace std;

int main(){
    int n=5,row,column;
    for (row= 0; row<n; row++)
    {
      for (column= 0; column< n; column++)
      {
        if (row==0||row==n-1||column==n-1-row)
        {
            cout<<'*';
        }
        else cout<<' ';
      }
      cout<<endl;
    }
    

}
