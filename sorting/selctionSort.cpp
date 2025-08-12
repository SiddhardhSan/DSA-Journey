#include <iostream>
using namespace std;
void selectionSort(int n ,int arr[]){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp =arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
    selectionSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}