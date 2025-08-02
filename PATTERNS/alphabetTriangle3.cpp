#include <iostream>
using namespace std;
void alphabetTriangle3(int n){
    
    for(int i=0;i<n;i++){
        char ch='E';
        ch-=i;

        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    alphabetTriangle3(n);
}