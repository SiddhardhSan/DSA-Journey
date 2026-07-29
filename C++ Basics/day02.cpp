#include<iostream>
using namespace std;

//even or odd function
int eveorodd(int n){
    if(n%2==0){
        cout<<"n is even";
    }
    else
        cout<<"n is odd";
    return 0;
}
 
int main(){
    int n;
    cout<<"enter an integer : ";
    cin>>n;
    eveorodd(n);
}