#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    string date = to_string(t->tm_year + 1900) + '-';
    date += ((t->tm_mon + 1 >= 10) ? "" : "0") + to_string(t->tm_mon + 1) + '-';
    date += ((t->tm_mday >= 10) ? "" : "0") + to_string(t->tm_mday);
    
    cout << date;
    
    return 0;
}