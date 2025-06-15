#include <iostream>
using namespace std;
int main ()
{
     int marks[4][2]={
        {23,95},
        {24,59},
        {25,85},
        {26,76}};
     for (int i=0;i<4;i++)
     {
        for (int j=0;j<2;j++)
        {
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
     }
}