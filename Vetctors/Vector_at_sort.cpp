#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(89);
    v.push_back(9);
    v.push_back(25);
    v.push_back(52);
    v.at(4)=45;
    cout<<"The size of the vector is "<<v.size()<<"."<<endl;
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }    
}