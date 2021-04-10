//The 3n + 1 Problem

#include <iostream>

using namespace std;

int main()
{
    int first = 0;
    int second = 0;
    int maximum = 0;
    int cnt = 0;
    while (cin >> first >> second)
    {
        maximum = 0;

        for (int i = min(first, second); i <= max(first, second); i++)
        {
            cnt = 1;
            int number = i;
            while (number != 1)
            {
                if (number % 2 == 1)
                {
                    number = 3 * number + 1;
                    ++cnt;
                }
                else if (number % 2 == 0)
                {
                    number = number / 2;
                    ++cnt;
                }
            }
            if (cnt > maximum)
            {
                maximum = cnt;
            }
        }

        cout << first << ' ' << second << ' ' << maximum << endl;
    }
    return 0;
}
