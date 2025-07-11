#include <iostream>

using namespace std;

int main()
{
    int N, O = 0;
    string S;
    cin >> N >> S;
    
    for (char c : S)
        O += (c == 'O');
    
    cout << (O * 2 >= N ? "Yes" : "No");
}