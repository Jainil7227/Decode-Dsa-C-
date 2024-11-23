//                          First Method
// #include <iostream>
// using namespace std;
// int main()
// {   
//     int x;
//     cout<<"Enter Height : ";
//     cin>>x;
//     for (int i=1; i<=x;i++)
//     {
//         for (int j=1;j<=x-i;j++)
//         {
//             cout<<" ";
//         }
//         for (int k=1;k<=(2*i)-1;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//                           Second method
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the height : ";
    cin>>x;
    int nsp=x-1;
    int nst=1;
    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=nsp;j++)          //spaces     
        {
            cout<<" ";
        }
        nsp=nsp-1;
        for (int k=1;k<=nst;k++)           //stars
        {
            cout<<"*";
        }
        nst=nst+2;
        cout<<endl;
    } 
}
