/*
code written by Eftekher Ali Efte from Bangladesh 
email: eftekherali2000@gmail.com
pursuing computer science and engineering in RUET
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, int> mp;
    
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        
        if (mp.find(x) == mp.end()) {
            // Username is unique, register it
            mp[x] = 0; // First time registration, set count to 0
            cout << "OK" << endl;
        } else {
            // Username already exists, increment and register new name
            mp[x]++;
            string newX = x + to_string(mp[x]);
            cout << newX << endl;
        }
    }
    
    return 0;
}
