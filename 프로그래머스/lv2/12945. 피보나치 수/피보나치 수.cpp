#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> fibb = {0, 1};
    
    while (fibb.size() <= n) 
        fibb.push_back((fibb[fibb.size() - 2] + fibb[fibb.size() - 1]) % 1234567);
        
    return fibb.back();
}