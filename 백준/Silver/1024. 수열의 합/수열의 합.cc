#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum, length;
    vector <int> result;

    cin >> sum >> length;

    for (int i=length; i<=100; i++) {
        if (i%2 == 0) {
            if ((int(sum/i)*2+1)*(i/2) == sum) {
                for (int j= int(sum/i) - i/2+1; j < int(sum/i) ;j++) {
                    result.push_back(j);
                }

                for (int j= int(sum/i); j< int(sum/i)+i/2+1; j++) {
                    result.push_back(j);
                }

                if (result[0] < 0) {
                    result.clear();
                    continue;
                }

                break;
            }
        } else {
            if (int(sum/i)*(i-1)+int(sum/i) == sum) {
                for (int j= int(sum/i) - i/2; j < int(sum/i) ;j++) {
                    result.push_back(j);
                }

                for (int j= int(sum/i); j< int(sum/i)+i/2+1; j++) {
                    result.push_back(j);
                }
                
                if (result[0] < 0) {
                    result.clear();
                    continue;
                }

                break;
            }
        }
    }

    if (result.size() == 0) {
        cout << "-1";
    } else {
        for (int i=0; i<result.size(); i++) {
            cout << result[i] << "\n";
        }
    }
}