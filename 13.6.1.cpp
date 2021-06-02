#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    int deleteNumber;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> deleteNumber;
    for (auto i = v.begin(); i != v.end();) {
        if (*i == deleteNumber) {
            v.erase(i);
        } else {
            i++;
        }

    }
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
}