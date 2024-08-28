#include <iostream>
#include <list>

using namespace std;

list<int> deck;

void insert_front()
{
    int num;
    cin >> num;
    deck.push_front(num);
}

void insert_back()
{
    int num;
    cin >> num;
    deck.push_back(num);
}

void erase_front()
{
    if (deck.size())
    {
        cout << deck.front() << "\n";
        deck.pop_front();
    } 
    else 
    {
        cout << "-1\n";
    }
}

void erase_back()
{
    if (deck.size())
    {
        cout << deck.back() << "\n";
        deck.pop_back();
    } 
    else 
    {
        cout << "-1\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    
    for (int i=0, command; i<N; i++) 
    {
        cin >> command;
        
        switch (command)
        {
            case 1:
                insert_front();
                break;
            case 2:
                insert_back();
                break;
            case 3:
                erase_front();
                break;
            case 4:
                erase_back();
                break;
            case 5:
                cout << deck.size() << "\n";
                break;
            case 6:
                cout << deck.empty() << "\n";
                break;
            case 7:
                cout << (deck.size() ? deck.front() : -1) << "\n";
                break;
            case 8:
                cout << (deck.size() ? deck.back() : -1) << "\n";
                break;
        }
    }
}