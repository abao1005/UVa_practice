//Minesweeper

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, m;
    char a;
    int round = 0;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            return 0;
        }
        else
        {
            ++round;
        }

        vector<vector<int>> mines(n + 2, vector<int>(m + 2, 0));
        getchar();
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                a = getchar();
                if (a == '*')
                {
                    mines[i].at(j) = -10;
                }
                else if (a == '.')
                {
                    mines[i].at(j) = 0;
                }
            }
            getchar();
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (mines[i].at(j) < 0)
                {
                    ++mines[i - 1].at(j - 1);
                    ++mines[i - 1].at(j);
                    ++mines[i - 1].at(j + 1);
                    ++mines[i].at(j - 1);
                    ++mines[i].at(j + 1);
                    ++mines[i + 1].at(j - 1);
                    ++mines[i + 1].at(j);
                    ++mines[i + 1].at(j + 1);
                }
            }
        }

        if (round == 1)
        {
            cout << "Field #" << round << ':' << endl;
        }else{
            cout << endl << "Field #" << round << ':' << endl;
        }
        
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (mines[i].at(j) < 0)
                {
                    cout << '*';
                }
                else
                {
                    cout << mines[i].at(j);
                }
            }
            cout << endl;
        }
        vector<vector<int>>().swap(mines);
    }

    return 0;
}
