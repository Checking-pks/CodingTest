#include <iostream>

using namespace std;

int main() {
	int laptopWidth, laptopHeight;
	int stickerWidth, stickerHeight;
	cin >> laptopWidth >> laptopHeight >> stickerWidth >> stickerHeight;

	cout << (laptopWidth -2 >= stickerWidth && laptopHeight -2 >= stickerHeight);
}