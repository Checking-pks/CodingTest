#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<vector<int>> caseSet;

void simulate(vector<int> now, int pos, int count, bool order) {
    if (pos >= now.size()) return;
    if (pos < 0) return;
    
    caseSet.insert(now);
    
    simulate(now, pos + (order ? 1 : -1), count, order);
    
    if (!count) return;
    
    vector<int> pull = now, push = now;
    
    for (int i=pos; i<now.size(); i++) 
        pull[i] = pull[i+1];
    for (int i=now.size()-1; i>pos; i--)
        push[i] = push[i-1];
    
    pull[now.size()-1] = 0, push[pos] = 0;
    
    simulate(pull, pos + (order ? 1 : -1), count - 1, order);
    simulate(pull, pos + (order ? 1 : -1), count - 1, !order);
    simulate(push, pos + (order ? 1 : -1), count - 1, order);
    simulate(push, pos + (order ? 1 : -1), count - 1, !order);
}

void output(vector<int> correct) {
    int result = 0;
    
    for (auto l : caseSet) {
        int now = 0;
        for (int i=0; i<l.size(); i++) 
            now += (l[i] == correct[i]);
        
        result = max(result, now);
    }
    
    cout << result;
}

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<int> correct(N), omr(N);
    for (int i=0; i<N; i++) cin >> correct[i];
    for (int i=0; i<N; i++) cin >> omr[i];
    
    simulate(omr, 0, K, 1);
    simulate(omr, N-1, K, 0);
    output(correct);
}