#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    string s;
    while(getline(cin, s))
    {
        if (s == "고무오리")
            count += (count ? -1 : 2);
        
        if (s == "문제")
            count++;
    }
    
    cout << (count ? "힝구" : "고무오리야 사랑해");
}