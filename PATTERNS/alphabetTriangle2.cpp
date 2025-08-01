//for printing aplphabet triangle 2nd type of pattern
#include <iostream>
using namespace std;
void alphabetTriangle2(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            cout<<" ";
        }
        char ch='A';
        for(int j=0;j<(2*i)+1;j++){
            if(j<((2*i+1)/2)){
                cout<<ch;
                ch++;

            }
            else{
                cout<<ch;
                ch--;
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n; 
    alphabetTriangle2(n);
}
