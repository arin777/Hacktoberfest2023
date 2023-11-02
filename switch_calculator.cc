#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter value of a";
    cin>>a;
    cout<<"value of b";
    cin>>b;
    char op;
    cout<<"enter op you want to perform";
    cin>>op;
    switch(op){
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*':cout<<(a*b)<<endl;
        break;
        case '/':cout<<(a/b)<<endl;
        default:cout<<"enter";
    }
}
