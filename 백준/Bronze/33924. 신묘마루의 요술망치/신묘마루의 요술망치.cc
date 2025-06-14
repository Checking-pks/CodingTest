#include <iostream>
#include <vector>

using namespace std;

vector<int> skillAX = {0, 3, 4, 1, 2}, skillAY = {0, 1, 2};
vector<int> skillBX = {0, 2, 1, 4, 3}, skillBY = {0, 2, 1};
vector<int> skillCX = {0, 4, 3, 2, 1}, skillCY = {0, 2, 1};

int main()
{
    int N, M, K;
    string S;
    
    cin >> N >> M >> K >> S;
    
    for (int i = 0; i < K; i++)
    {
        if (S[i] == 'A')
        {
            N = skillAX[N];
            M = skillAY[M];
        }
        
        if (S[i] == 'B')
        {
            N = skillBX[N];
            M = skillBY[M];
        }
        
        if (S[i] == 'C')
        {
            N = skillCX[N];
            M = skillCY[M];
        }
        
        if (S[i] == 'D')
        {
            if (N == 1 && M == 1)
                M++;
            else if (N == 4 && M == 2)
                M--;
            else if (M == 1)
                N--;
            else
                N++;
        }
    }
    
    cout << N << " " << M;
}