#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number of rows and columns : ";
    cin>>x>>y;
    int a[x][y];
    int b[x][y]; // array for storing orignal array.
    int c[y][x]; // transpose of the matrix.
    cout<<"Enter the elements of the array : "<<endl;
        for (int i=0;i<x;i++)  //taking input from the user
    {
        for (int j=0;j<y;j++)
        {
            cout<<"Enter the "<<(j+1)<<" element of row "<<(i+1)<<" : ";
            cin>>a[i][j];
        }
    }
        for (int i=0;i<x;i++)  //storing in different array
    {
        for (int j=0;j<y;j++)
        {
            b[i][j]=a[i][j];
        }
    }
        for (int i=0;i<x;i++)  //transposing the matrix
    {
        for (int j=0;j<y;j++)
        {
            c[j][i]=a[i][j];
        }
    }

        cout<<"The array is : "<<endl;
        for (int i=0;i<x;i++) // printing the array
    {
        for (int j=0;j<y;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of the given array is : "<<endl;

        for (int i=0;i<y;i++)  //printing the transpose
    {
        for (int j=0;j<x;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }   

 } 