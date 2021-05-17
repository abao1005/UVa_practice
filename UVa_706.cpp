#include <iostream>
#include <string>
using namespace std;

string line(int num,int row,int s);
int main(){
    int s =0;
    string number;
    int first =0;
    while (cin >> s)
    {
        cin >> number;
        if (s==0 && number.compare("0")==0)
        {
            break;
        }
        if(first==0){
		}else{
			cout<<endl;
		}
        for (int j = 1; j <= 2*s+3; j++)
        {
            for (int i = 0; i < number.length(); i++)
            {
                int no = number[i] - '0';
                if(i ==number.length()-1){
                	cout<< line(no,j,s);
				}else{ 
                	cout<< line(no,j,s)<< " ";
				}
            }
            cout<<endl;
        }
        first++;
    }
    
    return 0;
}

string line(int num,int row, int s){
    string toShow;
    if (num == 1)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            for (int i = 0; i < s; i++)
            {
                toShow += " ";
            }
            toShow += "  ";
        }else{
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }else if (num == 2)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else if(row>1 &&row<s+2){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }else if(row>s+2 &&row<2*s+3){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+=" ";
        }
    }else if (num == 3)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else{
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }else if (num == 4)
    {
        if(row==1 || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += " ";
            }
            toShow += " ";
        }else if(row ==2+s){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+="-";
            }
            toShow+=" ";
        }else if(row>1 &&row<s+2){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }else if(row>s+2 &&row<2*s+3){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
	}else if (num == 5)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else if(row>1 &&row<s+2){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+=" ";
        }else if(row>s+2 &&row<2*s+3){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }else if (num == 6)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else if(row>1 &&row<s+2){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+=" ";
        }else if(row>s+2 &&row<2*s+3){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }else if (num == 7)
    {
        if(row==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += " ";
            }
            toShow += " ";
        }else if(row ==1){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+="-";
            }
            toShow+=" ";
        }else if(row>1 &&row<s+2){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }else if(row>s+2 &&row<2*s+3){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }if (num == 8)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else{
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }else if (num == 9)
    {
        if(row==1 || row ==2+s || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else if(row>1 &&row<s+2){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }else if(row>s+2 &&row<2*s+3){
            toShow+=" ";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }else if (num == 0)
    {
        if(row==1 || row ==1+s+1+s+1){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += "-";
            }
            toShow += " ";
        }else if( row ==2+s){
            toShow += " ";
            for (int i = 0; i < s; i++)
            {
                toShow += " ";
            }
            toShow += " ";
        }
        else if(row>1 &&row<s+2){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }else if(row>s+2 &&row<2*s+3){
            toShow+="|";
            for (int i = 0; i < s; i++)
            {
                toShow+=" ";
            }
            toShow+="|";
        }
    }
    
    
    return toShow;
}
