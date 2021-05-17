#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    list<char> mylist;
    list<char>::iterator it = mylist.begin();
    string text;
    while (getline(cin,text))
    {
        for (int i = 0; i < text.length(); i++)
        {
            if(text[i] - '[' ==0){
                it = mylist.begin();
            }else if (text[i] - ']'==0)
            {
                it = mylist.end();
            }else{
                mylist.insert(it,text[i]);
            }
            
        }
        for (it = mylist.begin(); it != mylist.end(); it++)
        {
            cout<<*it;
        }
        cout<<endl;
        mylist.clear();
        text = "";
    }
    
    return 0;
}
