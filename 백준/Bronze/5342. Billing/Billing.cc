#include <iostream>
#include <map>

using namespace std;

map<string, double> itemList = {
    {"Paper", 57.99}, {"Printer", 120.5}, {"Planners", 31.25}, {"Binders", 22.5}, {"Calendar", 10.95}, {"Notebooks", 11.2}, {"Ink", 66.95}
};

int main()
{
    double price = 0;
    string s;
    cin >> s;
    
    while (s != "EOI")
    {
        price += itemList[s];
        cin >> s;
    }
    
    cout.precision(2);
    cout << fixed << "$" << price;
}