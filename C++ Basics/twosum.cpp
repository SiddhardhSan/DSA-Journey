#include<iostream>
using namespace std;
int twosum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // if(j==i){
            //     continue;
            // }
            
            if(arr[i]+arr[j]==target){
                cout<<"indices are "<<i<<" "<<j;
                return 0;
            }
            
        }
    }
    cout<<"no two sum";
    return 0;

}
int main(){
    int n,target;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target :";
    cin>>target;

    twosum(arr,n,target);
}