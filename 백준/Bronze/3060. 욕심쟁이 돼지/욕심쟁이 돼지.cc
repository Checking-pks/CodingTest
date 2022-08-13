#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int num, days = 1;
        int p1, p2, p3, p4, p5, p6;
        cin >> num;
        cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6;
        
        while (p1+p2+p3+p4+p5+p6 <= num) {
            int np1=p1, np2=p2, np3=p3, np4=p4, np5=p5, np6=p6;
            
            days ++;
            
            p1 = np1 + np2 + np4 + np6;
            p2 = np2 + np1 + np3 + np5;
            p3 = np3 + np2 + np4 + np6;
            p4 = np4 + np1 + np3 + np5;
            p5 = np5 + np2 + np4 + np6;
            p6 = np6 + np1 + np3 + np5;
           
        }
        
        cout << days << "\n";
    }
}
