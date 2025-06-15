#include <iostream>
using namespace std;
int main ()
{
     int marks[4][2]={
        {243,595},
        {244,59},
        {625,885},
        {126,76}};
     for (int i=0;i<4;i++)
     {
        for (int j=0;j<2;j++)
        {
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
     }
     int max = 0 ;
     for (int i=0;i<4;i++)
     {
        for (int j=0;j<2;j++)
        {
            if (marks[i][j]>max)
            {max=marks[i][j];}
        }
     }
     cout<<"The greatest number in this array is : "<<max;
}