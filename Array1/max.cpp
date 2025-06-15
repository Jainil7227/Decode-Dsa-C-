#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the lenght of the array : ";
    cin>>size;
    cout<<"Enter the elements of the array : ";
    for (int i=0;i<size;i++)
        {
            cin>>J[i];
        }
    int J[size];
    int max = J[0];
    for (int i=0;i<size;i++)
    {
        if (max<J[i])
        {
            max = J[i];
        }
    }
    cout<<"The maximum element of the array is "<<max<<" .";
}