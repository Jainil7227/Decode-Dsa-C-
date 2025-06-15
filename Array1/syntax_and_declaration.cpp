#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    for (int i=0;i<7;i++)
    {
        cout<<"Enter "<<i<<" element : ";
        cin>>arr[i];
    }
    cout<<"Array elemets are : ";
    for (int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}