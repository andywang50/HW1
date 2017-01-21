//  Jiwei Zhang
//  304184466
//  Winter 2017
//  PIC 10C HW1


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;
using namespace std;
int main() {
    bool wtp=1;
    string ans;
    int bet;

    while(wtp==1){
        Player p=Player(100);
        Player h=Player(900);
        while (p.get_money()>0&h.get_money()>0){
            do{
                cout << "Please enter a valid integer as your bet.\n";
                cin  >> bet;
            }while(bet<=0|bet>p.get_money());
            
        }
        if (p.get_money()<=0){
            cout<<"Player loses.\n";
            wtp=0;
        }
        if (h.get_money()<=0){
            cout<<"Host loses";
            wtp=0;
        }
        do{
            cout<<"Want to play another round? (y/n)\n";
            cin>>ans;
        }while(ans!="y"&ans!="n");
        if (ans=="y"){
            wtp=1;
        }
    }
    
    return 0;
}
