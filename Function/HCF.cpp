#include <iostream>
using namespace std;
int hcf(int x, int y)
{
    int z;
    if (x>y)
    {
        for(int i=1;i<=y;i++)
        {
            if (y%i==0 and x%i==0){ z = i;}
        }
    }
    else 
    {
        for(int i=1;i<=x;i++)
        {
            if (x%i==0 and y%i==0){ z=i;}
        }
    }
    return z;
}
int main()
{
    int x,y ;
    cout<<"Enter two number : ";
    cin>>x>>y;
    
    cout<<"The highest common factor is : "<<hcf(x,y)<<" .";
}