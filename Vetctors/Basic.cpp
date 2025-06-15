#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; //You need not mention size.
    v.push_back (6);
    v.push_back (5);
    v.push_back (3);
    v.push_back (4);
    for (int i=0;i<=(v.size()-1);i++)
    {
        cout<<v[i];
        cout<<" ";
    }
    cout<<endl<<"The size of the vector is "<<v.size();        
}