#include <iostream>
using namespace std;
int main(){
    cout<<"Input your marks : ";
    int x;
    cin>>x;
    if(x>100) cout<<"Invalid Sahi input daal laude !!!!";
    else if (x>=90) cout<<"Excellent";
    else if (x>=80) cout<<"Very good";
    else if (x>=70) cout<<"Good";
    else if (x>=60) cout<<"Average";
    else if (x>=60) cout<<"Below Average";
    else if (x>40) cout<<"Needs Improvement";
    else if (x<=40) cout<<"Fail ";
}