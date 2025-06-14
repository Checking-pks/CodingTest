#include <iostream>

using namespace std;

int main()
{
    int N, P;
    
    cin >> N;
    while (N)
    {
        cin >> P;
        
        int num, page, p1, p2, p3, p4;
        
        num = (P > N / 2 ? N - P : P - 1);
        page = num / 2;
        
        p1 = page * 2 + 1;
        p2 = page * 2 + 2;
        p3 = N - page * 2 - 1;
        p4 = N - page * 2;
        
        if (p1 != P) cout << p1 << " ";
        if (p2 != P) cout << p2 << " ";
        if (p3 != P) cout << p3 << " ";
        if (p4 != P) cout << p4;
        
        cout << "\n";
        
        cin >> N;
    }
}