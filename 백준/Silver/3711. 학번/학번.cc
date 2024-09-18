#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isDiff(vector<int> &arr, int num) {
    unordered_set<int> s;
    for (int i=0; i<arr.size(); i++) {
        int rest = arr[i] % num;
        
        if (s.find(rest) != s.end())
            return false;
        
        s.insert(rest);
    }
    
    return true;
}

int main()
{
    int N, G;
    cin >> N;
    
    while (N--) {
        cin >> G;
        
        vector<int> gList(G);
        for (int i=0; i<G; i++) 
            cin >> gList[i];
        
        for (int i=1; true; i++) {
            if (isDiff(gList, i)) {
                cout << i << "\n";
                break;
            }
        }
    }
}