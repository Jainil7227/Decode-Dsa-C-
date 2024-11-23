#include <iostream>
using namespace std;
int main()
{
    int x=4;
    int p=(2*x)-1,b=x/2;
    for (int i=1;i<=p;i++){
        for (int j=1;j<=p;j++)
        {
            int a=i,b=j;
            cout<<min(i,j);
        }
        cout<<endl;
    }
}