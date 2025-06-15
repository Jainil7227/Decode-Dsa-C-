#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int n,x;
    cout<<"Enter the number of elements of the vector : ";
    cin>>n;
    vector <int> v;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>x;
        v.push_back(x);
    }
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}