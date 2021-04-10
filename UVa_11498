//Division of Nlogonia

#include <iostream>

using namespace std;

int main()
{
    int residences = 0;
    int dx = 0;
    int dy = 0;
    int x = 0;
    int y = 0;
    while (cin >> residences)
    {
        if (residences == 0)
        {
            return 0;
        }
        else
        {
            cin >> dx;
            cin >> dy;

            for (int i = 0; i < residences; i++)
            {
                cin >> x;
                cin >> y;
                if (x == dx || y == dy)
                {
                    cout << "divisa" << endl;
                }
                else if (x > dx && y > dy)
                {
                    cout << "NE" << endl;
                }
                else if (x > dx && y < dy)
                {
                    cout << "SE" << endl;
                }
                else if (x < dx && y > dy)
                {
                    cout << "NO" << endl;
                }
                else if (x < dx && y < dy)
                {
                    cout << "SO" << endl;
                }
            }
        }
    }

    return 0;
}
