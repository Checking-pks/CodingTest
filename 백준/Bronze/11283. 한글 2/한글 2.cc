#include <iostream>
#include <codecvt>
#include <locale>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	wstring_convert<codecvt_utf8_utf16<wchar_t>> wchar_to_utf8;

	cout << wchar_to_utf8.from_bytes(str)[0] - 44031;
}