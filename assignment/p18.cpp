#include<iostream>
using namespace std;
int main()  

{  
    int num, count = 1, rem, sum;  
  
    while(count <= 100)  
    {  
        num = count;  
        sum = 0;  
  
        while(num>0)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            cout<<count<<"is the armstrong number"; 
        }  
  
        count++;  
    }  
  
     return 0;  
}  