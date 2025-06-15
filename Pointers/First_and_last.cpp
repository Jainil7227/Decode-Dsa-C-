#include <iostream>
using namespace std;
int* l;
int* f;
void jk (int x)
{
    int ld = x%10;
    for (;x>=10;x/=10)
    {}
     int fd = x;
    l = &ld;
    f= &fd;
}
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    jk(a);  
    cout<<"The last digit of the number is "<<*l<<endl;
    cout<<"The first digit of the number is "<<*f;    
}