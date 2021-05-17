#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int coachNum;
    stack<int> train;
    int point;
    int leaving;
    bool isPossible = true;
    int j;

    while (cin >> coachNum)
    {
        if (coachNum == 0)
        {
            break;
        }

        while (cin >> leaving)
        {
            if (leaving == 0)
            {
                cout << endl;
                break;
            }
            else
            {
                isPossible = true;
                for (j = 1; j <= leaving; j++)
                {
                    train.push(j);
                }
                point = j;
                train.pop();
            }

            for (int i = 1; i < coachNum; i++)
            {
                cin >> leaving;
                if (!isPossible)
                {
                    continue;
                }
                if (train.empty())
                {
                    for (j = point; j <= leaving; j++)
                    {
                        train.push(j);
                    }
                    point = j;
                    train.pop();
                    continue;
                }
                if (leaving == train.top())
                {
                    train.pop();
                }
                else if (leaving > train.top())
                {
                    for (j = point; j <= leaving; j++)
                    {
                        train.push(j);
                    }
                    point = j;
                    train.pop();
                }
                else if (leaving < train.top())
                {
                    isPossible = false;
                }
            }
            if (isPossible)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            stack<int>().swap(train);
        }
    }
}
