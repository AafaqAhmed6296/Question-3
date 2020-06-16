//
//  main.cpp
//  Question#3
//
//  Created by Afaq Ahmed on 16/06/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#include <iostream>

struct Player {
    char playerName[20];
    int runs;
    int innings;
    int notOut;
};

struct Team {
    int teamId;
    char teamName;
    int matchesPlayed;
    int winCount;
    int drawCount;
    int lossCount;
    Player player[11];
};

int main(){
    
    Team team[5];
    return 0;
}
