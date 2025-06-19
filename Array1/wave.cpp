#include <iostream>
using namespace std;
int main ()
    {
        int x,y;
        cout<<"Enter the number of rows and columns : ";
        cin>>x>>y;
        cout<<"Enter the elements of the matrix : "<<endl;
        int a[x][y];
        for (int i=0;i<x;i++)
        {
            for (int j=0;j<y;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"The elements in the wave form are : ";
        for (int i=0;i<x;i++)
        {
            if(i%2==0)
            {
                for (int j=0;j<y;j++)
                {
                    cout<<a[i][j]<<" ";
                }
            }
            else 
            {
                for (int j=y-1;j>=0;j--)
                {
                    cout<<a[i][j]<<" ";
                }
            }
        }

    }