#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int prev=-1;
    while (cin >> str)
    {   
        prev = -1;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ||str[i] == 'H' ||str[i] == 'W' ||str[i] == 'Y'){
                if (prev == 0)
                {
                    continue;
                }
                prev = 0;
                continue;
            }else if(str[i] == 'B'||str[i] == 'F'||str[i] == 'P'||str[i] == 'V'){
                if (prev == 1)
                {
                    continue;
                }
                prev = 1;
                cout<<"1";
            }else if(str[i] == 'C'||str[i] == 'G'||str[i] == 'J'||str[i] == 'K'||str[i] == 'Q'||str[i] == 'S'||str[i] == 'X'||str[i] == 'Z'){
                if (prev == 2)
                {
                    continue;
                }
                prev = 2;
                cout<<"2";
            }else if(str[i] == 'D'||str[i] == 'T'){
                if (prev == 3)
                {
                    continue;
                }
                prev = 3;
                cout<<"3";
            }else if(str[i] == 'L'){
                if (prev == 4)
                {
                    continue;
                }
                prev = 4;
                cout<<"4";
            }else if(str[i] == 'M'||str[i] == 'N'){
                if (prev == 5)
                {
                    continue;
                }
                prev = 5;
                cout<<"5";
            }else if(str[i] == 'R'){
                if (prev == 6)
                {
                    continue;
                }
                prev = 6;
                cout<<"6";
            }
        }
        cout <<endl;
    }
    
}
