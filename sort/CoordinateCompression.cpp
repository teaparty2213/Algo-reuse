#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Conditions
// 1. a[0] == 0
// 2. a[i] > 1 for all i
// 3. comp[i] > 0 for all i, except for 0

vector<int> CoordinateCompression(vector<int> &a, int n) { // Compress the vector a (1-index, a[0] == 0). n is the size of a, except for 0.
    vector<int> s(n + 1); // for sorting
    for (int i = 0; i <= n; i++) s[i] = a[i];
    sort(s.begin(), s.end());
    
    s.erase(unique(s.begin(), s.end()), s.end()); // erase duplicates
    
    vector<int> comp(n + 1);
    for (int i = 1; i <= n; i++) {
        comp[i] = lower_bound(s.begin(), s.end(), a[i]) - s.begin();
    }

    return comp; // comp[0] == 0
}