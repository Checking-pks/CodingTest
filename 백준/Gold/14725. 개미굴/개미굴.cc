#include <iostream>
#include <map>

using namespace std;

class node
{
public:
    map<string, node> child;
    
    void output(int d)
    {
        for (auto now : child)
        {
            for (int i = 0; i < d; i++)
                cout << "--";
            cout << now.first << "\n";
            now.second.output(d + 1);
        }
    }
};

int main()
{
    node root;
    int N;
    cin >> N;
    
    for (int i = 0, M; i < N; i++)
    {
        cin >> M;
        
        node* parent = &root;
        
        for (int j = 0; j < M; j++)
        {
            string now;
            cin >> now;
            
            parent = &parent->child[now];
        }
    }
    
    root.output(0);
}