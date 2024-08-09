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
 string extractStringAtKey(string str,int key)
 {
    char *s=strtok((char *)str.c_str()," ");
    while(key>1)
    {
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;

 }      

int convertToInt(string s)
{
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        ans+=((s[i]-'0')*p);
        p=p*10;
    }
    return ans;
}

bool numericComapre(pair<string,string>s1,pair<string,string>s2)
{
   string key1,key2;
   key1=s1.second;
    key2=s2.second;
    return convertToInt(key1)<convertToInt(key2);

}
bool lexioCompare(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}      
int main()
{
    string s="Today is a rainy day";
    int key;

    // cout<<extractStringAtKey(s,key);
    string a[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
    }
    string reversal,ordering;
    cin>>key;
    pair<string,string>strpair[100];

    for(int i=0;i<100;i++)
    {
        strpair[i].first=a[i];
        strpair[i].second=extractStringAtKey(a[i],key);
    }
    //Next=sorting

    if(ordering=="numeric")
    {
        sort(strpair,strpair+n,numericComapre);
    }
    else{
        sort(strpair,strpair+n,lexioCompare);
    }    
    if(reversal=="true")
    {
        for(int i=0;i<n/2;i++)
        {
            swap(strpair[i],strpair[n-i-1]);
        }
    }
return 0;
}
