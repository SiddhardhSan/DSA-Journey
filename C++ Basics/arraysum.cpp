#include<iostream>
using namespace std;
int arraysum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int k[n];
    cout<<"enter array values:\n";
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    cout<<"the sum of all elements of array is :"<<arraysum(k,n)<<endl;
    



}