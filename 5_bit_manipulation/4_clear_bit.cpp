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


void clearIbit(int &n,int i)
{
    int mask=~(1<<i);
    cout<<"mask :"<<mask<<endl;
    n=(n&mask);
}
int main()
{
    int n=13;
    
    // cout<<decimalToBinary(n)<<endl;
    //  clearIbit(n,2);
    //  cout<<"n:"<<n<<endl;
    //  cout<<(1<<2)<<endl;
    // int x= ~13;
    // cout<<x<<endl;
    // cout<<decimalToBinary(x)<<endl;
    clearIbit(n,2);
    cout<<n<<endl;
return 0;
}
