// for printing:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;
void squarewithholepattern(int n){
    //for upper part
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";

        }
    
        for(int j=1;j<(2*i)+1;j++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<"*";
            
        }
        cout<<endl;
    }
    //for lower part
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*n)-(i+i+2);j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    squarewithholepattern(n);
}