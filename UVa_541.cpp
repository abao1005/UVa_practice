#include <iostream>
#include <vector>
using namespace std;

int main(){
    int mtxSize;
    vector<vector<short>> mtx;
    short num;
    int oddRowNum;
    int oddColNum;
    int oddRowIndex;
    int oddColIndex;
    int sum;

    while (cin >> mtxSize)
    {
        if(mtxSize==0){
            break;
        }
        for (int i = 0; i < mtxSize; i++)
        {
            mtx.push_back(vector<short>());
            for (int j = 0; j < mtxSize; j++)
            {
                cin>>num;
                mtx.at(i).push_back(num);
            }
        }
        oddColNum = 0;
        oddRowNum = 0;
        oddColIndex = -1;
        oddRowIndex = -1;
        sum = 0;
        for (int i = 0; i < mtxSize; i++)
        {
            sum = 0;
            for (int j = 0; j < mtxSize; j++)
            {
                sum+=mtx.at(i).at(j);
            }
            if (sum%2==1)
            {
                oddRowNum+=1;
                oddRowIndex = i;
            }
            if (oddRowNum>1)
            {
                break;
            }
        }
        for (int i = 0; i < mtxSize; i++)
        {
            sum = 0;
            for (int j = 0; j < mtxSize; j++)
            {
                sum+=mtx.at(j).at(i);
            }
            if (sum%2==1)
            {
                oddColNum+=1;
                oddColIndex = i;
            }
            if (oddColNum>1)
            {
                break;
            }
        }
        if (oddRowNum == 0 && oddColNum ==0)
        {
            cout << "OK" << endl;
        }else if (oddRowNum == 1 && oddColNum ==0){
            cout << "Corrupt" << endl;
        }else if (oddRowNum == 0 && oddColNum ==1){
            cout << "Corrupt" << endl;
        }else if (oddRowNum == 1 && oddColNum ==1){
            cout << "Change bit ("<<oddRowIndex+1<<","<<oddColIndex+1<<")" << endl;
        }else if (oddRowNum > 1 || oddColNum >1){
            cout << "Corrupt" << endl;
        }
        vector<vector<short>>().swap(mtx);

    }
    
    return 0;
}
