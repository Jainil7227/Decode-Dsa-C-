#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"Enter the order of matrix of matrix 1 : ";
    cin>>m>>n;
    cout<<"Enter the order of matrix of matrix 2 : ";
    cin>>p>>q;
    if (n==p)
    {
        int a[m][n];
        int b[p][q];
        int c[m][q];
        cout<<"Enter the elements of matrix 1 : "<<endl;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"\nEnter the elements of matrix 2 : "<<endl;
        for (int i=0;i<p;i++)
        {
            for (int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }
        }
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<q;j++)
            {
                c[i][j]=0;
                for (int r=0;r<n;r++)
                {
                   c[i][j]+=a[i][r]*b[r][j];
                }
            }
        }
        cout<<"\nThe multiplication of 2 matrices is : "<<endl;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<q;j++)
            {
                cout<<c[i][j]<< " ";
            }
            cout<<endl;
        }

    }
    else cout<<"The matrices cannot be multiplied.  ";
}