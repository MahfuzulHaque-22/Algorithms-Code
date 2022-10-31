#include<iostream>
using namespace std;

int max_finder(int a[], int n)
{
    int mv = a[0];
    for(int i=0; i<n; i++)
    {
        if (a[i] > mv)
            mv=a[i];
    }
    return mv;
}

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
    max_value = max_finder(a,n);
    cout<<"The maximum value is: "<<max_value;
    return 0;
}
