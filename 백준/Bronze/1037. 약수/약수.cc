#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    list <int> l;
    cin >> n;

    for (int i=0; i<n; i++) {
        int num = 0;
        cin >> num;

        l.push_back(num);
    }

    l.sort();

    cout << l.front() * l.back();
}