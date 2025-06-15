#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the lenght of the array : ";
    cin>>size;
    cout<<"Enter the elements of the array : ";
    int J[size];
    for (int i=0;i<size;i++)
        {
            cin>>J[i];
        }
    int max = J[0],max2 = J[0];
    for (int i=0;i<size;i++)
    {
        if (max<J[i])
        {
            max = J[i];
        }
    }
    for (int i=0;i<size;i++)
    {
        if (J[i]==max){continue;}
        else 
        {
            if (max2<J[i])
            {
                max2 = J[i];
            }
        }
    }
    cout<<"The second largest element of the array is "<<max2<<" .";
}