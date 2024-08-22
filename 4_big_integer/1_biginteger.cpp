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
char digitTochar (int c)
{
    return c+'0';
}
int charToDigit(char c)
{
    return c-'0';
}    

 string addNumbers(string n1,string n2)
 {
    if(n1.length()>n2.length())
    {
        swap(n1,n2);

    }
    string result="";
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());
    int carry=0;
    for(int i=0;i<n1.length();i++)
    {
        int d1=charToDigit(n1[i]);
        int d2=charToDigit(n2[i]);
        int x=(d1+d2+carry)%10;
        carry=x/10;
        result.push_back(digitTochar(x));


    }
    for(int i=n1.length();i<n2.length();i++)
    {
        int d2=charToDigit(n2[i]);
        int sum=d2+carry;
        int output_digit=sum%10;
        carry=sum/10;
        result.push_back(digitTochar(output_digit));

    }
    if(carry)
    {
        result.push_back('1');
    }
    reverse(result.begin(),result.end());
    return result;
 }       
int main()
{
 string s1,s2;
 cin>>s1>>s2;
 string result=addNumbers(s1,s2);
 cout<<result<<endl;
        
return 0;
}
