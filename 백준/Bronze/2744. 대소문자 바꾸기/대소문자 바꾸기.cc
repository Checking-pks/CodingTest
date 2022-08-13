#include <iostream>
#include <string>

using namespace std;

int main() {
    int asciiDifference = 'a' - 'A';
    string str;
    cin >> str;
    
    for (int i=0; i<str.length(); i++) 
        str[i] += (str[i] >= 'A' && str[i] <= 'Z') ? asciiDifference : -asciiDifference;

    cout << str << "\n";
}