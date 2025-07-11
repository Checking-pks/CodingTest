#include <iostream>
#include <vector>
#include <set>

using namespace std;

int N;
vector<int> P, S;

void input()
{
    cin >> N;
    
    P = S = vector<int>(N);
    
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> S[i];
}

void shuffle(vector<int> &deck)
{
    vector<int> shuffledDeck = deck;
    
    for (int i = 0; i < N; i++)
        shuffledDeck[i] = deck[S[i]];
    
    deck = shuffledDeck;
}

void simulate()
{
    set<vector<int>> alreadyChecked;
    int count = 0;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        nList[i] = i % 3;
    
    while (P != nList)
    {
        if (alreadyChecked.find(nList) != alreadyChecked.end())
        {
            count = -1;
            break;
        }
        
        alreadyChecked.insert(nList);
        
        shuffle(nList);
        count++;
    }
    
    cout << count;
}

int main()
{
    input();
    simulate();
}