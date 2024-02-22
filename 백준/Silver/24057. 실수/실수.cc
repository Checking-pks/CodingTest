#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
	if (b==0) return a;
	return gcd(b, a%b);
}

void sum(vector<long long> A, vector<long long> B) {
	long long g = gcd(A[0], B[0]);
	vector<long long> newA = A, newB = B;
	
	for (long long i=0; i<3; i++) {
		newA[i] *= (B[0] / g);
		newB[i] *= (A[0] / g);

		if (i==1 || i==2)
			newA[i] += newB[i];
	}

	g = gcd(newA[0], gcd(newA[1], newA[2]));

	for (long long i=0; i<3; i++)
		newA[i] /= g;

	if (newA[0] < 0) 
		for (long long i=0; i<3; i++)
			newA[i] *= -1;

	if (newA[2] == 0) newA[3] = 0;
	if (newA[3] == 0) newA[2] = 0;

	for (long long i=0; i<4; i++) 
		cout << newA[i] << " ";
	cout << "\n";
}

void dif(vector<long long> A, vector<long long> B) {
	long long g = gcd(A[0], B[0]);
	vector<long long> newA = A, newB = B;

	for (long long i=0; i<3; i++) {
		newA[i] *= (B[0] / g);
		newB[i] *= (A[0] / g);

		if (i==1 || i==2)
			newA[i] -= newB[i];
	}

	g = gcd(newA[0], gcd(newA[1], newA[2]));

	for (long long i=0; i<3; i++)
		newA[i] /= g;

	if (newA[0] < 0) 
		for (long long i=0; i<3; i++)
			newA[i] *= -1;

	if (newA[2] == 0) newA[3] = 0;
	if (newA[3] == 0) newA[2] = 0;

	for (long long i=0; i<4; i++) 
		cout << newA[i] << " ";
	cout << "\n";
}

void mul(vector<long long> A, vector<long long> B) {
	vector<long long> newA = A;

	newA[0] *= B[0];
	newA[1] = (
		A[1] * B[1] +
		A[2] * B[2] * A[3]
	);
	newA[2] = (
		A[1] * B[2] +
		A[2] * B[1]
	);

	long long g = gcd(newA[0], gcd(newA[1], newA[2]));

	for (long long i=0; i<3; i++)
		newA[i] /= g;

	if (newA[0] < 0) 
		for (long long i=0; i<3; i++)
			newA[i] *= -1;

	if (newA[2] == 0) newA[3] = 0;
	if (newA[3] == 0) newA[2] = 0;

	for (long long i=0; i<4; i++)
		cout << newA[i] << " ";
	cout << "\n";
}

void div(vector<long long> A, vector<long long> B) {
	vector<long long> newA = A, newB = B;
	newB[2] *= -1;

	newA[0] *= (
		newB[1] * B[1] +
		newB[2] * B[2] * B[3]
	);
	newA[1] = B[0] * (
		A[1] * newB[1] +
		A[2] * newB[2] * A[3]
	);
	newA[2] = B[0] * (
		A[1] * newB[2] +
		A[2] * newB[1]
	);

	long long g = gcd(newA[0], gcd(newA[1], newA[2]));

	for (long long i=0; i<3; i++)
		newA[i] /= g;

	if (newA[0] < 0) 
		for (long long i=0; i<3; i++)
			newA[i] *= -1;

	if (newA[2] == 0) newA[3] = 0;
	if (newA[3] == 0) newA[2] = 0;
	
	for (long long i=0; i<4; i++)
		cout << newA[i] << " ";
	cout << "\n";
}

int main() {
	vector<long long> A(4), B(4);

	cin >> A[0] >> A[1] >> A[2] >> A[3];
	cin >> B[0] >> B[1] >> B[2] >> B[3];

	sum(A, B);
	dif(A, B);
	mul(A, B);
	div(A, B);
}