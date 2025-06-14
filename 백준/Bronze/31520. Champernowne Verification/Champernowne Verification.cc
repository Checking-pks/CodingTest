#include <iostream>

using namespace std;

int isChampernowne(string s)
{
    if (s == "1") return 1;
    if (s == "12") return 2;
    if (s == "123") return 3;
    if (s == "1234") return 4;
    if (s == "12345") return 5;
    if (s == "123456") return 6;
    if (s == "1234567") return 7;
    if (s == "12345678") return 8;
    if (s == "123456789") return 9;
    
    return -1;
}

int main()
{
    string s;
    cin >> s;
    cout << isChampernowne(s);
}