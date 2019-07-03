//
//  GameEntry.h
//  Project 1 for DATA STRUCTURE 1 (PROF. T.VO)
//
//  Created by Mai Pham on 9/5/17.
//  Copyright © 2017 Mai Pham. All rights reserved.
//

#ifndef GameEntry_h
#define GameEntry_h

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class GameEntry
{
private:
    string playerName, date;
    int score;
    
public:
    GameEntry();
    GameEntry(string name);
    GameEntry(string name, int point,  string d);
    void setName(string name);
    void setScore(int point);
    void setDate(string d);
    string getName();
    int getScore();
    string getDate();
};

#endif
