#include <iostream>
using namespace std;
int main(){
    cout<<"hello world\n";
    string str,kln;
    cin>>str;
    cin.ignore();
    getline(cin,kln);
    cout<<str<<endl;
    cout<<kln;

    return 0;
}