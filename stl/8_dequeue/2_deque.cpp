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
 class Fun{
    public:
    void operator()(int x)
    {
        cout<<x<<" ";
    }
 }     ; 
        
int main()
{
    Fun f;
    f(6);    
return 0;
}
