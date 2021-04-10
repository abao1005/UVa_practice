//The Trip

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int num_members;
    long double dollar;
    long double sum = 0.0;
    long double avg_high = 0.0;
    int avg_low = 0;
    int rich = 0;
    long double answer = 0.0;
    vector<long double> dollars;

    while (cin >> num_members)
    {
        if (num_members == 0)
        {
            break;
        }
        else
        {
            sum = 0.0;
            avg_high = 0.0;
            avg_low = 0;
            answer = 0.0;
            rich = 0;
        }

        for (int i = 0; i < num_members; i++)
        {
            cin >> dollar;
            dollars.push_back(dollar);
            sum += dollar;
        }
        avg_high = (long double)((int)floor(sum * 100.0+0.5) / num_members) / 100.0;
        avg_low = (int)floor(sum * 100.0+0.5) % num_members;

        for (int i = 0; i < num_members; i++)
        {
            if (dollars.at(i) > avg_high)
            {
                rich += 1;
            }
        }

        if (rich > avg_low)
        {
            for (int i = 0; i < num_members; i++)
            {
                if (dollars.at(i) > avg_high)
                {
                    answer += dollars.at(i) - avg_high;
                }
            }
            answer -= (long double)avg_low * 0.01;
        }
        else if (rich == avg_low)
        {
            for (int i = 0; i < num_members; i++)
            {
                if (dollars.at(i) < avg_high)
                {
                    answer += avg_high - dollars.at(i);
                }
            }
        }
        else if (rich < avg_low)
        {
            for (int i = 0; i < num_members; i++)
            {
                if (dollars.at(i) < avg_high)
                {
                    answer += avg_high - dollars.at(i);
                }
            }
            answer += (long double)(avg_low - rich) * 0.01;
        }

        cout << '$' << fixed << setprecision(2) << answer << endl;
        vector<long double>().swap(dollars);
    }
}
