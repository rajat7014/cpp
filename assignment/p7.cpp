#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter anny three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A is largest";
    }
    else if(b>a && b>c){
        cout<<"B is largest";
    }
    else{
        cout<<"C is largest";
    }
    return 0;
}