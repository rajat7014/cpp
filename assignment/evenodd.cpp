#include<iostream>
using namespace std;
int main(){
    int n,i,evensum=0,oddsum=0;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
           evensum = evensum+i;
            cout<<"sum of even number"<<evensum<<endl;
        }
        else{
            oddsum = oddsum+i;
            cout<<"sum of odd number"<<oddsum<<endl;
       }
       
       
    }
}
// even odd
