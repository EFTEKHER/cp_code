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
      
        
int main()
{
    
    vector<int> v{10,20,30,40,50,60,70,80,90};
   
    //next permutation
    next_permutation(v.begin(),v.end());
    cout<<endl;
    for(int x:v) {
       
        cout<<x<<" ";
    }
    next_permutation(v.begin(),v.end());
    cout<<endl;
        for(int x:v) {
       
        cout<<x<<" ";
    }  
return 0;
}
