#include<iostream>
#include<vector>
using namespace std;
//learning vector-concept,functions,implementation
int main(){
    vector<int> alpha;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        alpha.push_back(n);
    }
    for(int element:alpha){
        cout<<element<<endl;

    }
    cout<<alpha.size()<<endl;
    cout<<alpha.capacity()<<endl;
    alpha.pop_back();
    for(int element : alpha){
        cout<<element<<endl;
    }
    cout<<alpha.size()<<endl;
    cout<<alpha.capacity()<<endl;
    return 0;


}