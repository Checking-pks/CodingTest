#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
       
   int n,m, min = 64;
   cin >> n >> m;
   
   int field[n][m];
   
   for (int i=0; i<n; i++) {
       string line;
       cin >> line;
       
       for (int j=0; j<line.length(); j++) {
           if (line[j] == 'W') {
               field[i][j] = 1;
           } else if (line[j] == 'B') {
               field[i][j] = 2;
           }
       }
   }  
   
   for (int i=0; i<(n-7)*(m-7); i++) {
       int white_first=0, black_first=0;
       
       for (int j=0; j<64; j++) {                    
           if ((j/8+j%8)%2 == 0) {
               if (field[j/8+i/(m-7)][j%8+i%(m-7)] == 1) {                 
                   black_first++;
               } else if (field[j/8+i/(m-7)][j%8+i%(m-7)] == 2) {
                   white_first++;
               }
           } else if ((j/8+j%8)%2 == 1) {
               if (field[j/8+i/(m-7)][j%8+i%(m-7)] == 2) {                  
                   black_first++;
               } else if (field[j/8+i/(m-7)][j%8+i%(m-7)] == 1) {
                   white_first++;
               }
           }
       }     
             
       if ((white_first >= black_first)&&(min>black_first)) {           
           min = black_first;
       } else if ((white_first < black_first)&&(min>white_first)) {          
           min = white_first;
       }            
   }
   
   cout << min;
   
}
