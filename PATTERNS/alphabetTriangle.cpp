#include <iostream>
using namespace std;
// to print pattern:
// A 
// BB
// CCC
// DDDD
// EEEEE
// .
// .
void alphabetTriangle1(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        ch+=1;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    alphabetTriangle1(n);
}