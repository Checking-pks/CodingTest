#include <iostream>
#include <queue>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i=0; i<testCase; i++) {
        int documentNum, curiousNumber, times = 1;
        priority_queue<int> priorityDocumentList;
        queue<pair<int, int>> documentList;
        
        cin >> documentNum >> curiousNumber;

        for (int j=0; j<documentNum; j++) {
            int nowNum;
            cin >> nowNum;

            documentList.push({j, nowNum});
            priorityDocumentList.push(nowNum);
        }

        while(true) {
            if (documentList.front().second != priorityDocumentList.top()) 
                documentList.push(documentList.front());
            else if (documentList.front().first != curiousNumber) {
                priorityDocumentList.pop();
                times++;
            }
            else
                break;

            documentList.pop();
        }

        cout << times << "\n";
    }
    
    return 0;
}