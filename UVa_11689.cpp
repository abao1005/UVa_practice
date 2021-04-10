//Soda Surpler

#include <iostream>

using namespace std;

int main()
{
    int cases;
    int bottle1;
    int bottle2;
    int bottle;
    int drink;
    int cost;
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        drink = 0;
        cin >> bottle1;
        cin >> bottle2;
        cin >> cost;
        bottle = bottle1 + bottle2;
        while (true)
        {
            drink += bottle / cost;
            bottle = bottle % cost + bottle / cost;
            if (bottle < cost)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        cout << drink << endl;
    }

    return 0;
}
