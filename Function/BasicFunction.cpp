#include <iostream>
using namespace std;
void Triangle(int x)
{
    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter three values : ";
    cin>>a>>b>>c;
    Triangle(a);
    Triangle(b);
    Triangle(c);
    cout<<endl<<"Thank You";
}