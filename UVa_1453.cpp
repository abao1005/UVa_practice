#include <iostream>
#include <vector>
using namespace std;

int main(){
    int cases;
    int sqr_no;

    cin>>cases;
    for(int iii =0;iii<cases;iii++)
    {
        cin>>sqr_no;
        int xd=0,yd=0,max=0;
        vector<vector<pair<int,int>>> set;
        for (int i = 0; i < sqr_no; i++)
        {
            int w;
            pair<int,int> xy;
            cin >> xy.first;
            cin >> xy.second;
            cin >> w;
            vector<pair<int,int>> coor;
            set.push_back(coor);
            set[i].push_back(make_pair(xy.first,xy.second));
            set[i].push_back(make_pair(xy.first+w,xy.second+w));
            set[i].push_back(make_pair(xy.first,xy.second+w));
            set[i].push_back(make_pair(xy.first+w,xy.second));
        }

        for (int i = 0; i < sqr_no; i++)
        {
            for (int j = 0; j < sqr_no; j++)
            {
            	if(i==j){
            		continue;
				}
                if((set[j].at(1).first>set[i].at(0).first) && (set[j].at(1).second>set[i].at(0).second)){
                    xd = set[j].at(1).first - set[i].at(0).first;
                    yd = set[j].at(1).second - set[i].at(0).second;
                    if((xd*xd+ yd*yd)>max){
                        max = xd*xd+ yd*yd;
                    }
                }
                if((set[j].at(2).first<set[i].at(3).first) && (set[j].at(2).second>set[i].at(3).second)){
                    xd = set[i].at(3).first - set[j].at(2).first;
                    yd = set[j].at(2).second - set[i].at(3).second;
                    if((xd*xd+ yd*yd)>max){
                        max = xd*xd+ yd*yd;
                    }
                }
                
            }
        }
        cout<<max<<endl;
    }
    

    return 0;
}
