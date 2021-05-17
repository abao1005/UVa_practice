#include<iostream>
#include<vector>
using namespace std;

int main(){
    int cases;
    int testDays;
    int partyNum;
    int freq;
    int hartalDays;
    vector<bool> hartals;


    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> testDays;
        cin >> partyNum;
        for (int j = 0; j < testDays; j++)
        {
            hartals.push_back(false);
        }
        for (int j = 0; j < partyNum; j++)
        {
            cin >> freq;
            for (int k = 1; k*freq <= testDays; k++)
            {
                hartals.at(k*freq-1) = true;
            }
        }
        hartalDays =0;
        for (int j = 0; j < testDays; j++)
        {
            if (hartals.at(j) && !(j%7==5||j%7==6))
            {
                hartalDays += 1;
            }
        }
        cout<<hartalDays<<endl;
        vector<bool>().swap(hartals);
    }
    
    return 0;
}
