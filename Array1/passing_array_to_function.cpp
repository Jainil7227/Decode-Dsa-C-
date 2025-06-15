#include <iostream>
using namespace std;
void display(int arr[])
{
    for (int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,4,2,7,3};
    display(arr);   
}