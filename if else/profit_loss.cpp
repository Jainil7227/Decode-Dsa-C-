#include <iostream>
using namespace std;
int main(){
    float cp,sp,x;
    bool flag;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;
    x=sp-cp;
    cout<<"There is ";
    if(sp==cp) {cout<<"no profit and no loss ";}
    else{
        if (sp>cp){flag=true;}
        if (sp<cp) {flag=false;};
        if (flag==1) {cout<<"profit of "<<x<<" ";}
        else {cout<<"loss of "<<-x<<" ";}
        }
    cout<<"in this transaction.";
}