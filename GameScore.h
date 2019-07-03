//
//  GameScore.h
//  Project 1 for DATA STRUCTURE 1 (PROF. T.VO)
//
//  Created by Mai Pham on 9/5/17.
//  Copyright © 2017 Mai Pham. All rights reserved.
//

#ifndef GameScore_h
#define GameScore_h

#include "GameEntry.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAX_ENTRIES = 10;

class GameScore
{
private:
    GameEntry list[MAX_ENTRIES];
    int currentEntries;
    string gameName;
    
public:
    GameScore(string name);
    void getEntry(int n);
    void add(GameEntry e);
    void remove(int n);
    void remove(string d);
    void print();
    void print(string name);
};

#endif 
