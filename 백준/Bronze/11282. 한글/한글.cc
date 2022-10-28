#include <iostream>
#include <codecvt>
#include <locale>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	wstring_convert<codecvt_utf8_utf16<wchar_t>> cvt;
	cout << cvt.to_bytes(n + 44031);
}