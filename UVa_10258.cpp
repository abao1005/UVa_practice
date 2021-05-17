#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct info
{
    int teamNum;
    int correct;
    int time;
};
bool compare_team(const info &team1, const info &team2);

int main()
{
    vector<vector<int>> board;
    vector<bool> hasSummited;
    vector<info> displayBoard;
    string cases;
    string dumb;
    string team;
    string teamNum;
    string probNum;
    string spentTime;
    string format;

    for (int i = 0; i < 105; i++)
    {
        vector<int> v;
        board.push_back(v);
        for (int j = 0; j < 10; j++)
        {
            board.at(i).push_back(0);
        }
        hasSummited.push_back(false);
    }
    getline(cin, cases);
    getline(cin, dumb);

    for (int i = 0; i < stoi(cases); i++)
    {
        if (i != 0)
        {
            cout << endl;
        }

        while (getline(cin, team) && (team != ""))
        {
            istringstream iss(team);
            iss >> teamNum >> probNum >> spentTime >> format;
            hasSummited.at(stoi(teamNum)) = true;
            if (format.compare("I") == 0)
            {
                if (board.at(stoi(teamNum)).at(stoi(probNum)) != -1)
                {
                    board.at(stoi(teamNum)).at(stoi(probNum))++;
                }
            }
            else if (format.compare("C") == 0 && board.at(stoi(teamNum)).at(stoi(probNum)) != -1)
            {
                board.at(stoi(teamNum)).at(0) += board.at(stoi(teamNum)).at(stoi(probNum)) * 20 + stoi(spentTime);
                board.at(stoi(teamNum)).at(stoi(probNum)) = -1;
            }
        }

        for (int j = 0; j < 105; j++)
        {
            if (hasSummited.at(j))
            {
                displayBoard.push_back({j, count(board.at(j).begin(), board.at(j).end(), -1), board.at(j).at(0)});
            }
        }
        sort(displayBoard.begin(), displayBoard.end(), compare_team);
        for (int j = 0; j < displayBoard.size(); j++)
        {
            cout << displayBoard.at(j).teamNum << " " << displayBoard.at(j).correct << " " << displayBoard.at(j).time << endl;
        }

        for (int j = 0; j < 105; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                board.at(j).at(k) = 0;
                hasSummited.at(j) = false;
            }
        }
        vector<info>().swap(displayBoard);
    }

    return 0;
}

bool compare_team(const info &team1, const info &team2)
{
    if (team1.correct != team2.correct)
    {
        return (team1.correct > team2.correct);
    }
    if (team1.time != team2.time)
    {
        return team1.time < team2.time;
    }
    return team1.teamNum < team2.teamNum;
}
