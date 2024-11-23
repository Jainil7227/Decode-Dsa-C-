#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Please enter the alpabet : ";
    cin>>a;
    int x= (int)a;
    if ((x>=65 and x<=90) or (x>=97 and x<=122))
        {
        cout<<"This alpabet is a ";
        if(x==97 or x==101 or x==105 or x==111 or x==117 or x==65 or x==69 or x==73 or x==79 or x==85){cout<<"vovel.";}
        else cout<<"consonant.";
        }
    else cout<<"This character is not an alphabet.";
}