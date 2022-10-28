#include <iostream>
#include <codecvt>
#include <locale>
#include <string>

using namespace std;

int main() {
	int num;
	cin >> num;

	wstring_convert<codecvt_utf8_utf16<wchar_t>> wchar_to_utf8;

	cout << wchar_to_utf8.to_bytes(num + 44031);
}