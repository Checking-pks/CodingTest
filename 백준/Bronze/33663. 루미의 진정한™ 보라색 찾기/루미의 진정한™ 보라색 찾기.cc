#include <iostream>

using namespace std;

bool simulate()
{
    double h_lo, h_hi,
        s_lo, s_hi,
        v_lo, v_hi,
        R, G, B;
    
    cin >> h_lo >> h_hi >> s_lo >> s_hi >> v_lo >> v_hi >> R >> G >> B;
    
    double M, m, H, S, V;
    
    M = max(R, max(G, B));
    m = min(R, min(G, B));
    
    V = M;
    S = 255 * (V - m) / V;
    
    if (V == R) H = 60 * (G - B) / (V - m);
    if (V == G) H = 120 + 60 * (B - R) / (V - m);
    if (V == B) H = 240 + 60 * (R - G) / (V - m);
    
    if (H < 0) H += 360;

    if (h_lo > H || H > h_hi) return true;
    if (s_lo > S || S > s_hi) return true;
    if (v_lo > V || V > v_hi) return true;
    
    return false;
}

int main()
{
    cout << "Lumi will ";

    if (simulate())
        cout << "not ";
    
    cout << "like it.";
}