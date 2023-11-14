#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int hypotenuse = max(max(sides[0], sides[1]), sides[2]);
    
    if (2 * hypotenuse < sides[0] + sides[1] + sides[2])
        return 1;
    else
        return 2;
}