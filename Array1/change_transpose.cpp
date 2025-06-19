#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows/columns : ";
    int x;
    cin>>x;
    int a[x][x];
    cout<<"Enter the elements of the array : "<<endl;
        for (int i=0;i<x;i++)  //taking input from the user
    {
        for (int j=0;j<x;j++)
        {
            cin>>a[i][j];
        }
    }
        for (int i=0;i<x;i++) //Transposing in the same matrix
    {
        for (int j=0;j<x;j++)
        {
            if (j>i)
            {
                int temp = a[i][j];
                a[i][j]=a[j][i];
                a[j][i] = temp;
            }
            else continue;
        }
    } 
 cout<<"New matrix is : "<<endl;
        for (int i=0;i<x;i++)  //printing the transpose matrix 
    {
        for (int j=0;j<x;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
} 