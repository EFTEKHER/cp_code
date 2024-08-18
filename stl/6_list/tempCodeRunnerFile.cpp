/*
Code written by Eftekher Ali Efte from Bangladesh
email: eftekherali2000@gmail.com
Pursuing Computer Science and Engineering in RUET
*/
#include <iostream>
#include <list>
#include <utility>
using namespace std;

int main() {
    list<pair<int, int>> *l;
    int n;
    cin >> n;
    l = new list<pair<int, int>>[n]; // Dynamically allocate an array of linked lists
    int e;
    cin >> e;
    for (int i = 0; i < e; i++) {
        int x, y, wt;
        cin >> x >> y >> wt;
        l[x].push_back(make_pair(y, wt));
        l[y].push_back(make_pair(x, wt)); // Assuming undirected graph
    }

    for (int i = 0; i < n; i++) {
        cout << "Linked list " << i << " -> ";
        for (auto xp : l[i]) {
            cout << "(" << xp.first << ", " << xp.second << "), ";
        }
        cout << endl;
    }

    delete[] l; // Free the dynamically allocated memory
    return 0;
}
