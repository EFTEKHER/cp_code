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
   queue<int>q;
   for(int i=0; i<=5;i++)
   {
         q.push(i);
   }   
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }  
return 0;
}
