#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of lines you want in your pattern";
    cin>>n;

    
    for(int row = 1; row <= n; row++)
    {
        for (int spaces = 1; spaces <= row-1; spaces++)
        {
            cout<<" ";
        }
        for (int stars = 1; stars <= n-row+1; stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}

