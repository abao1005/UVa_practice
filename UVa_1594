//Ducci Sequence

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int cases;
    int tu_size;
    int tmp;
    cin >> cases;
    vector<vector<int>> ducci;

    for (int i = 0; i < cases; i++)
    {
        cin >> tu_size;
        ducci.push_back(vector<int>());
        for (int j = 0; j < tu_size; j++)
        {
            cin >> tmp;
            ducci[0].push_back(tmp);
        }
        for (int j = 1; j <= 1000; j++)
        {
            ducci.push_back(vector<int>());
            for (int k = 0; k < tu_size; k++)
            {
                if (k == tu_size - 1)
                {
                    ducci[j].push_back(abs(ducci[j - 1].at(k) - ducci[j - 1].at(0)));
                }
                else
                {

                    ducci[j].push_back(abs(ducci[j - 1].at(k) - ducci[j - 1].at(k + 1)));
                }
            }
            if (*max_element(ducci[j].begin(), ducci[j].end()) == 0)
            {
                cout << "ZERO" << endl;
                vector<vector<int>>().swap(ducci);
                break;
            }
            else
            {
                for (int m = 0; m < j; m++)
                {
                    if (ducci[m] == ducci[j])
                    {
                        j = 1500;
                        cout << "LOOP" << endl;
                        vector<vector<int>>().swap(ducci);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
