#include <bits/stdc++.h>
using namespace std;
//problem 2
int main() {
	int t;
	cin>>t;
	cout<<'\n';
	for(int i=0;i<t;i++){
	    int n;
	    
	    vector<int> arr(2*n);
	    cin>>n;
	    cout<<'\n';
	    for(int j=0;j<(2*n);j++){
	        cin>>arr[j];
	    }
	    for(int k=0;k<n;k++){
	        if(arr[k]<arr[(2*n)-(k+1)]){
	            int temp=arr[k];
	            arr[k]=arr[(2*n)-(k+1)];
	            arr[(2*n)-(k+1)]=temp;
	        }
	        
	    }
	    int sum=0;
	    for(int l=0;l<n;l++){
	        sum+=arr[l];
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;

}
