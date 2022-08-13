#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <int> result(11, 0);
    vector <string> color_list = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string c1, c2, c3;

    string num = "";

    cin >> c1;
    cin >> c2;
    cin >> c3;

    for (int i=0; i<10; i++) {
        if (c1 == color_list[i]) {
            result[0] = i;
        }

        if (c2 == color_list[i]) {
            result[1] = i;
        }

        if (c3 == color_list[i]) {
            for (int j=0; j<9-i; j++) {
                result.pop_back();
            }
        }
    }

    for (vector<int>::iterator iter = result.begin(); iter != result.end(); iter++) {
        if (iter == result.begin() && *iter == 0) continue;

        num += to_string(*iter);
    }

    if (result[0] == 0 && result[1] == 0) cout << "0";
    else cout << num;
}