#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main(){
    int instNum;
    int inst;
    int num;
    bool isQ = true,isS = true,isPQ = true;
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;

    while (cin >> instNum)
    {
        for (int i = 0; i < instNum; i++)
        {
            cin >> inst;
            cin >> num;
            if (!isQ && !isS && !isPQ)
            {
                continue;
            }
            if (inst == 1)
            {
                s.push(num);
                q.push(num);
                pq.push(num);
            }else if(inst == 2){
                if (isS)
                {   
                    if (s.empty())
                    {
                        isS = false;
                        isQ = false;
                        isPQ = false;
                        continue;
                    }
                    if (num == s.top())
                    {
                        s.pop();
                    }else{
                        isS = false;
                    }
                }
                if (isQ)
                {
                    if (q.empty())
                    {
                        isS = false;
                        isQ = false;
                        isPQ = false;
                        continue;
                    }
                    if (num == q.front())
                    {
                        q.pop();
                    }else{
                        isQ = false;
                    }
                }
                if (isPQ)
                {
                    if (pq.empty())
                    {
                        isS = false;
                        isQ = false;
                        isPQ = false;
                        continue;
                    }
                    if (num == pq.top())
                    {
                        pq.pop();
                    }else{
                        isPQ = false;
                    }
                }
            }
        }
        if(isS && !isQ && !isPQ){
            cout<< "stack"<<endl;
        }else if(!isS && isQ && !isPQ){
            cout<< "queue"<<endl;
        }else if(!isS && !isQ && isPQ){
            cout<< "priority queue"<<endl;
        }else if(isS && isQ && !isPQ){
            cout<< "not sure"<<endl;
        }else if(isS && !isQ && isPQ){
            cout<< "not sure"<<endl;
        }else if(!isS && isQ && isPQ){
            cout<< "not sure"<<endl;
        }else if(isS && isQ && isPQ){
            cout<< "not sure"<<endl;
        }else if(!isS && !isQ && !isPQ){
            cout<< "impossible"<<endl;
        }

        isQ = true;isS = true;isPQ = true;
        stack<int>().swap(s);
        queue<int>().swap(q);
        priority_queue<int>().swap(pq);
    }
    
    
}
