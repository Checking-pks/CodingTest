#include <iostream>
#include <vector>

using namespace std;

struct team
{
    int totalScore = 0;
    int submissionNumber = 0;
    int lastSubmissionTime = 0;
    vector<int> score = vector<int> (101);
};

void simulate()
{
    int teamCount, problemCount, myTeamNumber, logEntryCount, rank = 1;
    cin >> teamCount >> problemCount >> myTeamNumber >> logEntryCount;
    
    vector<team> scoreboard(teamCount + 1);
    
    for (int i = 0; i < logEntryCount; i++)
    {
        int nowTeamId, nowProblemNumber, nowGetScore;
        cin >> nowTeamId >> nowProblemNumber >> nowGetScore;
        
        scoreboard[nowTeamId].totalScore -= scoreboard[nowTeamId].score[nowProblemNumber];
        scoreboard[nowTeamId].score[nowProblemNumber] = max(nowGetScore, scoreboard[nowTeamId].score[nowProblemNumber]);
        scoreboard[nowTeamId].totalScore += scoreboard[nowTeamId].score[nowProblemNumber];
        
        scoreboard[nowTeamId].submissionNumber++;
        scoreboard[nowTeamId].lastSubmissionTime = i;
    }
    
    for (int i = 1; i <= teamCount; i++)
    {
        if (i == myTeamNumber) continue;
        
        if (scoreboard[i].totalScore > scoreboard[myTeamNumber].totalScore)
            rank++;
            
        if (scoreboard[i].totalScore == scoreboard[myTeamNumber].totalScore &&
            scoreboard[i].submissionNumber < scoreboard[myTeamNumber].submissionNumber)
            rank++;
        
        if (scoreboard[i].totalScore == scoreboard[myTeamNumber].totalScore &&
            scoreboard[i].submissionNumber == scoreboard[myTeamNumber].submissionNumber &&
            scoreboard[i].lastSubmissionTime < scoreboard[myTeamNumber].lastSubmissionTime)
            rank++;
    }
    
    cout << rank << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int testcase;
    cin >> testcase;
    
    while (testcase--)
        simulate();
}