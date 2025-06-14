#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s.substr(0, s.length() / 2) << " " << s.substr(s.length() / 2);
}