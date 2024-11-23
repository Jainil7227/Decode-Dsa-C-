#include<iostream>
using namespace std;
int main()
{
    int x=4;
    // cout<<"Enter the no. of rows : ";
    // cin>>x;
    int nsp=1,nst=x-1,a=1;
    for (int i=1;i<=x;i++)
    {
        if(i==1)
        {
            for (int l=1;l<=(2*x)-1;l++)
            {
                cout<<l;
            }
            cout<<endl;
        }
        else 
        {
            a=1;    
            for (int j=1;j<=nst;j++)
            {
                cout<<a;
                a++;
            }
            for (int k=1;k<=nsp;k++){
                cout<<" ";
                a++;
            }
            nsp+=2;
            for (int m=1;m<=nst;m++)
            {
                cout<<a;
                a++;
            }
            nst--;
            cout<<endl;
        }
    }
}