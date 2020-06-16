//
//  main.cpp
//  Question#3
//
//  Created by Afaq Ahmed on 16/06/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#include <iostream>
using namespace std;
struct Team;
void playerName(Team team[5]);
struct Player {
    char playerName[20];
    int runs;
    int innings;
    int notOut;
};

struct Team {
    int teamId;
    char teamName[30];
    int matchesPlayed;
    int winCount;
    int drawCount;
    int lossCount;
    Player player[11];
};

int main(){
    
    Team team[5];
    
    for (int i = 0; i < 5 ; i++) {
        cout << "Enter Team " << i+1 << " Id "; cin >> team[i].teamId;
        cout << "Enter Team " << i+1 << " name "; cin.getline(team[i].teamName, 30);
        cout << "Enter Team " << i+1 << " matchesPlayed: "; cin >> team[i].matchesPlayed;
        cout << "Enter Team " << i+1 << " win matches: "; cin >> team[i].winCount;
        cout << "Enter Team " << i+1 << " draw matches :"; cin >> team[i].drawCount;
        cout << "Enter Team " << i+1 << " lossCount: "; cin >> team[i].lossCount;
        for (int k = 0 ; k < 11 ; k++) {
            cout << "Enter Team " << i+1 << " player's Name: ";   cin.getline(team[i].player[k].playerName, 20);
            cout << "Enter Team " << i+1 << " player's runs: "; cin >>  team[i].player[k].runs;
            cout << "Enter Team " << i+1 << " player's innings: "; cin >>  team[i].player[k].innings;
            cout << "Enter Team " << i+1 << " player's times not out: "; cin >>  team[i].player[k].notOut;
        }
    }
    
    
    
    
    
    
    
    return 0;
}

void playerName(Team team[5]) {
    for (int i = 0 ; i < 5 ; i ++ ) {
        for (int j = 0 ; j < 11 ; j++) {
            if (team[i].player[j].runs > 5000){
                cout << "Player Name " << team[i].player[j].playerName << endl;
                cout << "Player team's Name " << team[i].teamName;
                
            }
        }
    }
}

void TeamName(Team team[5]){
    
}
