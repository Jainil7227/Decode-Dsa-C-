#include <iostream>
using namespace std;
int main()
{
    int a[2][3]={{2,4,5},{1,5,7}};
    int b[2][3]={{4,5,7},{3,8,2}};
    int c[2][3];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            c[i][j]=(a[i][j])+b[i][j];
        }
    }
    cout<<"Matrix 1 : "<<endl;

        for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2 : "<<endl;

        for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Addition of 2 matrix is : "<<endl;
        for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }    
}