#include <iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for (int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<fact(a)<<" .";
}