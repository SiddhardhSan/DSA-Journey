#include <bits/stdc++.h>
using namespace std;
//problem 4
//Status attempted-not solved
int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
	    int n,k,c=0,p=0;
	    cin>>n>>k;
	    if(n==0){
	        cout<<0<<endl;
	        continue;
	    }
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    if(n==1){
	        cout<<1<<endl;
	        continue;
	    }
	    else{
	        for(int j=0;j<n;j++){
	            
	               if((k>=arr[j])){
	                    k=k-arr[j];
	                     c++;
	               }
	               else if(p==0){
	                   c++;
	                   p=1;
	               }
	               else{
	                   break;
	               }
	            
	            
	        }
	    }
	    cout<<c<<endl;
	    
	    
	    
	    
	}
    return 0;
}

