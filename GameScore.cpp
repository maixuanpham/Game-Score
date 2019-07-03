//
//  GameScore.cpp
//  Project 1 for DATA STRUCTURE 1 (PROF. T.VO)
//
//  Created by Mai Pham on 9/5/17.
//  Copyright © 2017 Mai Pham. All rights reserved.
//
//  Implementation File (Member Functions)
//

#include "GameScore.h"
#include "GameEntry.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

GameScore::GameScore(string name)
{
    gameName = name;
    currentEntries = 0;
}
void GameScore::getEntry(int n)
{
    cout << "Entry #" << n << ": ";
    n--;
    cout << list[n].getName() << " " << list[n].getScore() << " " << list[n].getDate() << endl;
}
void GameScore::add(GameEntry e)
{
    GameEntry temp;
    int count = currentEntries;
    if (currentEntries == MAX_ENTRIES)
    {
        if(e.getScore() > list[MAX_ENTRIES-1].getScore())
        {
            for (int i = currentEntries-1; i >= 0; i--)
            {
                if (list[i].getScore() < e.getScore())
                {
                    list[i] = list[i-1];
                    count--;
                }
            }
            list[count] = e;
        }
    }
    else
    {
        list[currentEntries] = e;
        currentEntries++;
        for (int i = 0; i < currentEntries; i++)
        {
            for (int j = 0; j < (currentEntries - 1); j++)
            {
                if (list[j].getScore() < list[j+1].getScore())
                {
                    temp = list[j];
                    list[j] = list[j+1];
                    list[j+1] = temp;
                }
            }
        }
    }
}
void GameScore::remove(int n)
{
    n--;
    for (int i = n; i < currentEntries-1; i++)
        list[i] = list[i+1];
    currentEntries--;
}
void GameScore::remove(string d)
{
    int i = 0;
    while (i < currentEntries)
    {
        if(list[i].getDate() < d)
            remove(i+1);
        else
            i++;
    }
}
void GameScore::print()
{
    cout << "Name: " << gameName << endl;
    cout << "Current: " << currentEntries << endl;
    for (int i = 0; i < currentEntries; i++)
        cout << (i+1) << "\t" << list[i].getName() << "\t"
        << list[i].getScore() << "\t\t" << list[i].getDate() << endl;
    cout << endl;
}
void GameScore::print(string fileName)
{
    ofstream outFile;
    outFile.open(fileName);
    
    outFile << "Name: " << gameName << endl;
    outFile << "Current: " << currentEntries << endl;
    for (int i = 0; i < currentEntries; i++)
        outFile << (i+1) << "\t" << list[i].getName() << "\t"
        << list[i].getScore() << "\t\t" << list[i].getDate() << endl;
    cout << endl;
    outFile.close();
}
