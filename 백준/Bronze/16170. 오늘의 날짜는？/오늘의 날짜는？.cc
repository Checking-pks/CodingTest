#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    
    string year = to_string(t->tm_year + 1900);
    string month = to_string(t->tm_mon + 1);
    string day = to_string(t->tm_mday);
    
    if (month.length() < 2) month = "0" + month;
    if (day.length() < 2) day = "0" + day;
    
    cout << year << "\n" << month << "\n" << day;
    
    return 0;
}