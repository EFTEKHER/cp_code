/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#define ll long long int
#include <ctype.h>
using namespace std;
void overLaycharacter(string &s, int n)
{
    int j = 0;
    while (n > 0)
    {
        int last_digit = n & 1;
        if (last_digit)
        {
            cout << s[j];
        }
        j++;
        n = n >> 1;
    }
    cout << endl;
}
void generatorAllSubsequence(string s)

{
    int n = s.length();

    for (int i = 0; i < (1 << n); i++)
    {
        overLaycharacter(s, i);
    }
    return;
}
int main()
{
    string s;
    cin >> s;
    generatorAllSubsequence(s);

    return 0;
}
