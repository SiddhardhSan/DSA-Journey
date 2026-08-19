#include <bits/stdc++.h>
using namespace std;
//problem 3
int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    int odd=0,eve=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){
	            eve++;
	        }
	        else{
	            odd++;
	        }
	    }
	    if(arr.size()==0){
	        cout<<0<<endl;
	    }
	    else if(eve==odd){
	        cout<<(2*eve)<<endl;
	    }
	    else if(eve<odd){
	        cout<<(2*eve)+1<<endl;
	    }
	    else{
	        cout<<(2*odd)+1<<endl;
	    }
	}
	return 0;

}