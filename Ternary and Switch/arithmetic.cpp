#include <iostream>
using namespace std;
int main ()
{
    int x;
    int* ptr = &x;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr;
}