//Bubble Sort Algorithm
#include <iostream>
using namespace std;
void bSort(int arr[],int n){
    int srA=0;
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                srA=1;     
            }
        }
        if(srA==0) break;
    }
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}