#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    bool isLeft=true;
    while (getline(cin,text))
    {
        for (int i = 0; i < text.length(); i++)
        {
            if(text[i]=='\"' && isLeft){
                cout<<"``";
                isLeft = false;
            }else if(text[i]=='\"' && !isLeft){
                cout<<"\'\'";
                isLeft = true;
            }else{
                cout<<text[i];
            }
        }
        cout<<endl;
    }

}
