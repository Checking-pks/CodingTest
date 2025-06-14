#include <iostream>

using namespace std;

int getScore()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    return a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2;
}

int main()
{
    int aScore = getScore();
    int bScore = getScore() + 1;
    
    cout << (aScore > bScore ? "cocjr0208" : "ekwoo");
}