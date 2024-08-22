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
   int t;
   cin>>t;
   while(t--)
   {
       string x;
   cin>>x;
  transform(x.begin(), x.end(), x.begin(), ::tolower);
if (x == "yes") {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}
   }
return 0;
}
