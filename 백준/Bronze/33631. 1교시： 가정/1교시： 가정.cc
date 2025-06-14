#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int Fs, Cs, Es, Bs,
        Fn, Cn, En, Bn;
    
    cin >> Fs >> Cs >> Es >> Bs
        >> Fn >> Cn >> En >> Bn;
    
    int Q, cookie = 0;
    cin >> Q;
    
    for (int i = 0, a, b; i < Q; i++)
    {
        cin >> a >> b;
        
        if (a == 1)
        {
            if (Fs >= Fn * b &&
                Cs >= Cn * b &&
                Es >= En * b &&
                Bs >= Bn * b)
            {
                Fs -= Fn * b;
                Cs -= Cn * b;
                Es -= En * b;
                Bs -= Bn * b;
                
                cookie += b;
                
                cout << cookie << "\n";
            }
            else
            {
                cout << "Hello, siumii\n";
            }
        }
        
        if (a == 2)
        {
            Fs += b;
            cout << Fs << "\n";
        }
        
        if (a == 3)
        {
            Cs += b;
            cout << Cs << "\n";
        }
        
        if (a == 4)
        {
            Es += b;
            cout << Es << "\n";
        }
        
        if (a == 5)
        {
            Bs += b;
            cout << Bs << "\n";
        }
    }
}