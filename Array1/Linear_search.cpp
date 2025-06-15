#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the length of the array : ";
    cin>>size;
    int Jk[size];
    int x;
    cout<<"Enter the elements of the array : "<<endl;
    for (int i=0;i<size;i++)    
    {
        cin>>Jk[i];
    }
    cout<<"Enter the element to search in the array : ";
    cin>>x;
    bool flag = false;
    for (int i=0;i<5;i++)
    {
        if (Jk[i]==x)
        {
            cout<<x<<" is the "<<(i+1)<<"th element of the array.";
            flag = true;
        }
     }
    if (flag == false)
    {
        cout<<x<<" is not present in the array.";
    }
}