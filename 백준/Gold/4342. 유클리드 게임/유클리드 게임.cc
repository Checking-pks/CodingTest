#include <iostream>

using namespace std;

bool simulate(int A, int B, bool aTurn)
{
	if (A < B) swap(A, B);
	if (!B) return !aTurn;
	
	if (A / B == 1) 
	    return simulate(B, A % B, !aTurn);
	else 
	    return aTurn;
}

int main()
{
	int A, B;
	cin >> A >> B;

	while (A | B)
	{
		cout << (simulate(A, B, true) ? "A" : "B") << " wins\n";
		cin >> A >> B;
	}
}