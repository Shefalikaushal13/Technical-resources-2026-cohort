#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of lines you want the pattern";
    cin>>n;

    for(int row = 1; row <= n; row++)
    {
        for (int spaces = 1; spaces <= n - row; spaces++)
        {
            cout<<" ";
        }
        for (int stars = 1; stars <= row; stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
