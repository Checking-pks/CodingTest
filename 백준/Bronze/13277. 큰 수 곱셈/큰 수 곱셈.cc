#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <complex>
#include <string>

using namespace std;

typedef complex<double> base;

void fft(vector<base> &a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<base> a0(n / 2), a1(n / 2);
    for (int i = 0, j = 0; i < n; i += 2, ++j) {
        a0[j] = a[i];
        a1[j] = a[i + 1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * M_PI / n * (invert ? -1 : 1);
    base w(1), wn(cos(ang), sin(ang));
    for (int i = 0; i < n / 2; ++i) {
        a[i] = a0[i] + w * a1[i];
        a[i + n / 2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n / 2] /= 2;
        }
        w *= wn;
    }
}

void multiply(const string &a, const string &b, string &res) {
    vector<base> fa(a.size()), fb(b.size());
    int n = 1;
    while (n < a.size() + b.size())
        n <<= 1;
    for (int i = 0; i < a.size(); ++i)
        fa[i] = a[a.size() - 1 - i] - '0';
    for (int i = 0; i < b.size(); ++i)
        fb[i] = b[b.size() - 1 - i] - '0';
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; ++i)
        fa[i] *= fb[i];
    fft(fa, true);

    res.resize(n);
    int carry = 0;
    for (int i = 0; i < n; ++i) {
        int t = round(fa[i].real()) + carry;
        res[i] = (t % 10) + '0';
        carry = t / 10;
    }
    while (res.size() > 1 && res.back() == '0')
        res.pop_back();
    reverse(res.begin(), res.end());
}

int main() {
	string n1, n2, res;
	cin >> n1 >> n2;
    multiply(n1, n2, res);
	cout << res;
    return 0;
}