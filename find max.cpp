#include<iostream>
using namespace std;

int main()
{
    int n;
    int max_value;
    cout<<"How many of numbers?"<<endl;
    cin>>n;
    int a[n];

    cout<<"Please enter the number: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    max_value=a[0];
    for(int i=0; i<n; i++)
    {
       if(a[i]>max_value)
        max_value = a[i];
    }
    cout<<"The maximum value is: "<<max_value;
   return 0;
}
