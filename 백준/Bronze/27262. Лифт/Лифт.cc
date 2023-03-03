#include <iostream>

using namespace std;

int main() {
    int goal, elevator, walkSpeed, elevatorSpeed;

	cin >> goal >> elevator >> walkSpeed >> elevatorSpeed;

	cout << (elevator - 1) * elevatorSpeed + (goal - 1) * elevatorSpeed << " ";
	cout << (goal - 1) * walkSpeed;
}