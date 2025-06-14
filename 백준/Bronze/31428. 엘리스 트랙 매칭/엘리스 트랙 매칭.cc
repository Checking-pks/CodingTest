#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    vector<char> nList(N);
    for (int i=0; i<N; i++)
        cin >> nList[i];
        
    char target;
    cin >> target;
    
    for (int i=0; i<N; i++) 
        result += (nList[i] == target);
        
    cout << result;
}