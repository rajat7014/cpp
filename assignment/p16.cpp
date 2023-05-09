#include<iostream>
using namespace std;
int main(){
    int i,n,count;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }
        if(count==2)
          printf("prime number");
        else
         printf("not prime number");
}