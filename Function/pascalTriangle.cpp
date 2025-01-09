#include <iostream>
using namespace std;

int fact(int a)
{
    int f=1;
    for (int i=1;i<=a;i++)
    {
        f*=i;
    }
    return f;
}

int combination(int n, int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}

int main()
{
    int x=5;
    for (int i=0;i<=x;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}