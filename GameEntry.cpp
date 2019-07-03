//
//  GameEntry.cpp
//  Project 1 for DATA STRUCTURE 1 (PROF. T.VO)
//
//  Created by Mai Pham on 9/5/17.
//  Copyright © 2017 Mai Pham. All rights reserved.
//
//  Implementation File (Member Functions)
//

#include "GameEntry.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

GameEntry::GameEntry()
{
    playerName = "";
    score = 0;
    date = "00/00/00";
}
GameEntry::GameEntry(string name)
{
    playerName = name;
}
GameEntry::GameEntry(string name, int point, string d)
{
    playerName = name;
    score = point;
    date = d;
}
void GameEntry::setName(string name)
{
    playerName = name;
}
void GameEntry::setScore(int point)
{
    score = point;
}
void GameEntry::setDate(string d)
{
    date = d;
}
string GameEntry::getName()
{
    return playerName;
}
int GameEntry::getScore()
{
    return score;
}
string GameEntry::getDate()
{
    return date;
}
