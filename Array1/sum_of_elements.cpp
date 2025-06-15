#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the length of the array : ";
    cin>>size;
    cout<<"Enter the elements of the array : "; 
    int Jk[size];
    for (int i=0;i<size;i++)
    {
        cin>>Jk[i];
    }
    int sum = 0;
    for (int i=0;i<5;i++)
    {
        sum += Jk[i];
    }
    cout<<"The sum of the elements is : "<<sum;
}