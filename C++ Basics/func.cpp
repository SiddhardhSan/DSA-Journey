#include<iostream>
using namespace std;
//calculator using func
int add(int a, int b){
    return a+b;
}
int subs(int a, int b){
    return a-b;
}
int divi(int a,int b ){
    return a/b;
}
int rem(int a,int b ){
    return a%b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a+b="<<add(a,b)<<endl;
    cout<<"a-b="<<subs(a,b)<<endl;
    cout<<"a/b="<<divi(a,b)<<endl;
    cout<<"a%b="<<rem(a,b)<<endl;
}