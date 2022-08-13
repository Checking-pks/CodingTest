#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int b) {
    vector <int> list = {};

    switch (a%10) {
        case 1:
            return 1;
        case 2:
            list = {2, 4, 8, 6};
            break;
        case 3:
            list = {3, 9, 7, 1};
            break;
        case 4:
            list = {4, 6};
            break;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            list = {7, 9, 3, 1};
            break;
        case 8:
            list = {8, 4, 2, 6};
            break;
        case 9:
            list = {9, 1};
            break;
        case 0:
            return 10;
    }

    return list[(b-1)%list.size()];
}


int main() {
    int times;

    cin >> times;

    for (int i=0; i<times; i++) {
        int a, b;

        cin >> a >> b;

        cout << solution(a, b) << "\n";
    }
}