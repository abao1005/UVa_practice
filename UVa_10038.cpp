#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int nums;
    int num;
    int diff;
    char space;
    bool isJolly = true;
    vector<int> vec;
    vector<bool> isJump;

    while (cin >> nums)
    {
        for (int i = 0; i < nums; i++)
        {
            cin >> num;
            vec.push_back(num);
            isJump.push_back(false);
        }
        isJump.pop_back();

        for (int i = 1; i < vec.size(); i++)
        {
            diff = abs(vec.at(i) - vec.at(i - 1));
            if (diff >= 1 && diff < vec.size() && !isJump.at(diff - 1))
            {
                isJump.at(diff - 1) = true;
                continue;
            }
            else
            {
                isJolly = false;
                break;
            }
        }
        if (isJolly)
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }
        isJolly = true;
        vector<int>().swap(vec);
        vector<bool>().swap(isJump);
    }

    return 0;
}
