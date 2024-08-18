/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#define ll long long int
#include<ctype.h> 
using namespace std;
string decimalToBinary(int n) {
    string binary;
    bool isNegative = false;
    
    if (n < 0) {
        isNegative = true;
        n = -n;
    }
    
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    
    if (isNegative) {
        binary = "-" + binary;
    }
    
    return binary;
}
void x(int &n,int i)
{
   int mask=(-1<<i);
   n=(n&mask);
    
}
        
int main()
{
    int n,i;
    cin>>n>>i;
    cout<<"Previous number :"<<decimalToBinary(n)<<endl;
    x(n,i);
    cout<<n<<endl;
     cout<<"Previous number :"<<decimalToBinary(n)<<endl;    
return 0;
}
