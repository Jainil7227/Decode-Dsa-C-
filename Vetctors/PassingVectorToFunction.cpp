#include <iostream>
#include <vector>
using namespace std;
void change(vector <int> &a)
{
    a[0]=100;
    for (int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int n,x;
    vector <int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(89);
    v.push_back(9);
    v.push_back(25);
    v.push_back(52);
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change (v);
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }    
}