#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

bool cmpCode   (vector<int> a, vector<int> b) { return a[0] < b[0]; }
bool cmpData   (vector<int> a, vector<int> b) { return a[1] < b[1]; }
bool cmpMaximum(vector<int> a, vector<int> b) { return a[2] < b[2]; }
bool cmpRemain (vector<int> a, vector<int> b) { return a[3] < b[3]; }

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    unordered_map<string, int> extToIdx = {{"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}};
    vector<vector<int>> answer;
    
    for (int i=0; i<data.size(); i++) {
        if (data[i][extToIdx[ext]] >= val_ext) continue;
        answer.push_back(data[i]);
    }
    
    if (sort_by == "code")    sort(answer.begin(), answer.end(), cmpCode);
    if (sort_by == "date")    sort(answer.begin(), answer.end(), cmpData);
    if (sort_by == "maximum") sort(answer.begin(), answer.end(), cmpMaximum);
    if (sort_by == "remain")  sort(answer.begin(), answer.end(), cmpRemain);
    
    return answer;
}