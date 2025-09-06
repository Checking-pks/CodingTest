#include <iostream>
#include <string>
#include <functional>
#include <cctype>
#include <algorithm>

using namespace std;

int eval(const string& s) {
    int pos = 0;

    function<int()> parse = [&]() -> int {
        auto skip = [&]() {
            while (pos < (int)s.size() && isspace(static_cast<unsigned char>(s[pos]))) ++pos;
        };

        skip();
        int val;
        if (s[pos] == '-') {
            ++pos;
            skip();
            int inner;
            if (s[pos] == '(') {
                ++pos;
                inner = parse();
                ++pos;
            } else if (isdigit(s[pos])) {
                inner = s[pos++] - '0';
            } else {
                inner = parse();
            }
            if (inner == 0) val = 2;
            else if (inner == 2) val = 0;
            else val = 1;
        }
        else if (s[pos] == '(') {
            ++pos;
            val = parse();
            ++pos;
        } else {
            val = s[pos++] - '0';
        }

        while (true) {
            skip();
            if (pos >= (int)s.size() || s[pos] == ')') break;

            char op = s[pos++];
            skip();

            int rhs;
            if (s[pos] == '-') {
                ++pos;
                skip();
                if (s[pos] == '(') {
                    ++pos;
                    rhs = parse();
                    ++pos;
                } else {
                    rhs = s[pos++] - '0';
                }
                if (rhs == 0) rhs = 2;
                else if (rhs == 2) rhs = 0;
                else rhs = 1;
            }
            else if (s[pos] == '(') {
                ++pos;
                rhs = parse();
                ++pos;
            } else {
                rhs = s[pos++] - '0';
            }

            if (op == '+') val = max(val, rhs);
            else if (op == '*') val = min(val, rhs);
        }
        return val;
    };

    return parse();
}

bool calc(string s, int p, int q, int r)
{
	string S1 = "";
	for (char c : s)
	{
		if (c == '-' && S1.back() == '-')
			S1.pop_back();
		else
			S1.push_back(c);
	}
	
	string S2 = "";
	for (int i = 0; i < S1.length(); i++)
	{
		switch (S1[i])
		{
		case '(':
		case ')':
		case '*':
		case '+':
		case '-':
			S2.push_back(S1[i]);
			continue;
		case '0':
		case '1':
		case '2':
			S2.push_back(S1[i]);
			break;
		case 'P':
			S1[i--] = char('0' + p);
			continue;
		case 'Q':
			S1[i--] = char('0' + q);
			continue;
		case 'R':
			S1[i--] = char('0' + r);
			continue;
		}
	}
	
	return eval(S2) == 2;
}

int main()
{
	string s;
	cin >> s;

	while (s != ".")
	{
		int result = 0;

		for (int p = 0; p < 3; p++)
			for (int q = 0; q < 3; q++)
				for (int r = 0; r < 3; r++)
					result += calc(s, p, q, r);

		cout << result << "\n";
		cin >> s;
	}
}