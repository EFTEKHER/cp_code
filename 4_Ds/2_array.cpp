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
    vector<int> first;
    vector<int> second(4,100);
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> third(numbers,numbers+10);
    for(auto x:third)
    {
        cout<<x<<" ";
    }
vector<int> fourth(third);
        
return 0;
}
