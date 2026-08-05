#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> diagonal(int x,int y){
    int k=x+1,i=0;
    vector<int> tarr;
    vector<vector<int>> arr;
    int q=y+1;
    while((k>x)&&(k<=8)&&(k>=1)&&(q<=8)&&(q>=1)){
        tarr={k,q};
        arr.push_back(tarr);
        k++;
        q++;
        i++;
    }
    k=x-1,q=y-1;
    while((k<x)&&(k<=8)&&(k>=1)&&(q<=8)&&(q>=1)){
        tarr={k,q};
        arr.push_back(tarr);
        k--;
        q--;
        i++;
    }
    k=x+1,q=y-1;
    while((k>x)&&(k<=8)&&(k>=1)&&(q<=8)&&(q>=1)){
        tarr={k,q};
        arr.push_back(tarr);
        k++;
        q--;
        i++;
    }
    k=x-1,q=y+1;
    while((k<x)&&(k<=8)&&(k>=1)&&(q<=8)&&(q>=1)){
        tarr={k,q};
        arr.push_back(tarr);
        k--;
        q++;
        i++;
    }
    return arr;
    
}
int moves(int x1,int y1,int x2,int y2) {
	vector<vector<int>>arr1=diagonal(x1,y1);
	vector<vector<int>> arr2=diagonal(x2,y2);
	vector<int> arr0={x2,y2};
	for(int i=0;i<arr1.size();i++){
	    if(arr1[i]==arr0){
	        cout<<1<<endl;
	        return 0;
	        
	    }
	    
	}
	for(int i=0;i<arr1.size();i++){
	    for(int j=0;j<arr2.size();j++){
	        if(arr1[i]==arr2[j]){
	            cout<<2<<endl;
	            return 0;
	        }
	    }
	    
	}
	cout<<-1<<endl;
	return 0;
	
	

}
int main(){
    int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    moves(x1,y1,x2,y2);
	    
	}
	return 0;
}
