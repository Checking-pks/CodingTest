#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int days;
    float totalMath, totalKorean, dayMath, dayKorean;
    cin >> days >> totalMath >> totalKorean >> dayMath >> dayKorean;
    
    cout << days - (ceil(totalMath / dayMath) > ceil(totalKorean / dayKorean) ? ceil(totalMath / dayMath) : ceil(totalKorean / dayKorean));
}