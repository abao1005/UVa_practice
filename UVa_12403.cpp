#include <iostream>
#include <string>
using namespace std;

int main(){
    int op_no;
    string op;
    int amnt=0;
    int dntion;
    cin >> op_no;
    for (int i = 0; i < op_no; i++)
    {
        cin>>op;
        if (op.compare("donate")==0)
        {
            cin >> dntion;
            amnt+=dntion;
        }else if(op.compare("report")==0){
            cout<<amnt<<endl;
        }
        
    }
    
}
