#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    for (int i=0, zero=1; i<n_str.size(); i++) {
        if (zero && n_str[i] == '0') continue;
        zero = 0;
        answer += n_str[i];
    }
    return answer;
}