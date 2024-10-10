#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> nList(N);
    for (int i=0; i<N; i++)
        cin >> nList[i];
    
    int result = 0, last = nList.back();
    for (int i=N-2; i>=0; i--) {
        int now = nList[i];
        
        if (now >= last) {
            result += now - last + 1;
            last--;
        } else {
            last = now;
        }
    }
    
    cout << result;
}