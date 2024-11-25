#include <iostream>
using namespace std;

int fact(int a)
{
    int b=1;
    for (int i=a;i>=1;i--)
    {
        b=b*i;
    }
    return b;
}

int main()
{
    int n,r,p,c;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    if(n>r)
    {
        c=fact(n)/(fact(r)*fact(n-r));
        p=fact(n)/fact(n-r);
        cout<<"The number of possible combinations is "<<c<<" .";
        cout<<"\nThe total number of possible permutations is "<<p<<" .";
    }
    else cout<<"Invalid output";
}