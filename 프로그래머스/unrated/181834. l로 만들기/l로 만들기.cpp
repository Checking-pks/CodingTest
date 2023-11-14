#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (char c:myString) answer += (c > 'l' ? c : 'l');
    return answer;
}