#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int  z;
    cout<<"Enter amount of number"<<endl;
    cin>>z;
    cout<<"Enter number in array :";
    for(int i=0; i<z; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
