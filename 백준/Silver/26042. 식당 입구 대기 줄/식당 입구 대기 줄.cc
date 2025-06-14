#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, maxLine = 0, result = 0;
    queue<int> line;
    
    cin >> N;
    for (int i = 0, comm, num; i < N; i++)
    {
        cin >> comm;
        
        if (comm == 2)
            line.pop();
        else
        {
            cin >> num;
            line.push(num);
            
            if (maxLine < line.size())
            {
                maxLine = line.size();
                result = num;
            }
            else if (maxLine == line.size())
                result = min(result, num);
        }
    }
    
    cout << maxLine << " " << result;
}