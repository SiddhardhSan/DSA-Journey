#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,X,Y;
	cin>>T;
	for(int i=1;i<=T;i++){
	    cin>>N>>X>>Y;
	    if(N<3){
	        cout<<(N*X)<<endl;
	    }
	    else{
	        cout<<((3*X)+(N-3)*Y)<<endl;
	    }
	    
	}

}
