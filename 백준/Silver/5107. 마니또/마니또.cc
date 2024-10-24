#include <iostream>
#include <map>

using namespace std;

bool isChain(map<string, string> m, string start, string now)
{
    if (now == "") return false;
    if (start == now) return true;
    
    return isChain(m, start, m[now]);
}

int main()
{
    int N;
    cin >> N;
    
    for (int i=1; N; i++) {
        int result = 0;
        map<string, string> secretAngel;
        
        for (int j=0; j<N; j++) 
        {
            string a, b;
            cin >> a >> b;
            secretAngel[a] = b;
        }
        
        for (auto now : secretAngel)
        {
            if (isChain(secretAngel, now.first, now.second))
            {
                secretAngel[now.first] = "";
                result++;
            }
        }
        
        cout << i << " " << result << "\n";
        cin >> N;
    }
}