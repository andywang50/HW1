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
int main() {
    bool wtp=1;
    string ans="";
    string player="Player";
    string host="Host";
    Card pc=Card();
    Card hc=Card();
    Player p=Player(100);
    Player h=Player(900);
    int bet=0;

    while(wtp==1){
        p=Player(100);
        h=Player(900);
        
        
        while (p.get_money()>0&h.get_money()>0){
            do{
                cout << "Please enter a valid integer as your bet.\n";
                cin  >> bet;
            }while(bet<=0|bet>p.get_money());
        
            do{
                pc=Card();
                p.AddCard(pc);
                if (h.SumPlayer()<=5.5){
                    hc=Card();
                    h.AddCard(hc);
                }
                p.report(player);
                h.report(host);
                
                if (p.SumPlayer()>7.5|h.SumPlayer()>7.5){
                    ans="n";
                }
                
                while (ans!="n"|ans!="y"){
                    cout<<"Do you want another card? (y/n)\n";
                    cin>>ans;
                }
                
            }while(ans=="y");
            
            if (h.SumPlayer()>7.5&p.SumPlayer()<=7.5){
                cout<<"Player wins"<<"\n";
                p.clearmoney(bet);
                h.clearmoney(-1*bet);
                cout<<"Player has money: "<<p.get_money()<<"\n";
                cout<<"Host has money: "<<h.get_money()<<"\n";
            }
            
            if (h.SumPlayer()<=7.5&p.SumPlayer()>7.5){
                cout<<"Host wins"<<"\n";
                p.clearmoney(-1*bet);
                h.clearmoney(bet);
                cout<<"Player has money: "<<p.get_money()<<"\n";
                cout<<"Host has money: "<<h.get_money()<<"\n";
            }
            
            if (h.SumPlayer()>7.5&p.SumPlayer()>7.5){
                cout<<"Host wins (Host advantage)"<<"\n";
                p.clearmoney(-1*bet);
                h.clearmoney(bet);
                cout<<"Player has money: "<<p.get_money()<<"\n";
                cout<<"Host has money: "<<h.get_money()<<"\n";
            }
            
            if (h.SumPlayer()<=7.5&p.SumPlayer()<=7.5){
                
                if(h.SumPlayer()>p.SumPlayer()){
                    cout<<"Host wins"<<"\n";
                    p.clearmoney(-1*bet);
                    h.clearmoney(bet);
                    cout<<"Player has money: "<<p.get_money()<<"\n";
                    cout<<"Host has money: "<<h.get_money()<<"\n";
                }
                
                if(h.SumPlayer()<p.SumPlayer()){
                    cout<<"Player wins"<<"\n";
                    p.clearmoney(bet);
                    h.clearmoney(-1*bet);
                    cout<<"Player has money: "<<p.get_money()<<"\n";
                    cout<<"Host has money: "<<h.get_money()<<"\n";
                }
                
                if(h.SumPlayer()==p.SumPlayer()){
                    cout<<"Tie"<<"\n";
                    cout<<"Player has money: "<<p.get_money()<<"\n";
                    cout<<"Host has money: "<<h.get_money()<<"\n";
                }
            }
            
        }
        
        ans="";
        
        if (p.get_money()<=0){
            wtp=0;
        }
        if (h.get_money()<=0){
            wtp=0;
        }
        do{
            cout<<"Want to play another round? (y/n)\n";
            cin>>ans;
        }while(ans!="y"&ans!="n");
        if (ans=="y"){
            wtp=1;
        }
        else{
            wtp=0;
        }
    }
    
    return 0;
}
