//
//  main.cpp
//  Project 1 for DATA STRUCTURE 1 (PROF. T.VO)
//
//  Created by Mai Pham on 9/5/17.
//  Copyright © 2017 Mai Pham. All rights reserved.
//

#include "GameScore.h"
#include "GameEntry.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name, date;
    int score;
    
    ifstream inputFile;
    inputFile.open("GameList.txt");
    
    GameScore g1("Classic Pac-Man");
    
    if (!inputFile)
    {
        cout << "Error opening file. \n";
        cout << "The file was not found" << endl;
        return 1;
    }

    cout << "Project 1 for DATA STRUCTURE 1 (PROF. T.VO)\n";
    cout << "Author: Mai Pham\n\n";
    
    cout << "Display input file data.\n";
    inputFile >> name;
    while (!inputFile.eof())
    {
        inputFile >> score >> date;
        cout << name << "\t" << score << "\t\t" << date << endl;
        
        GameEntry gamePerson (name, score, date);
        g1.add(gamePerson);
        
        inputFile >> name;
    }
    cout << "\nDisplay Game Score List.\n";
    g1.print();
    
    cout << "Dislay entry #5:\n";
    g1.getEntry(5);
    
    cout << "\nRemove entry #5 and display new list.\n";
    g1.remove(5);
    g1.print();
    
    cout << "Remove all game entry before 08/15/2017.\n";
    g1.remove("08/15/2017");
    g1.print();
    
    cout << "Add one entry, display, and save the new list into file.";
    GameEntry gamePerson ("Jerel", 911, "10/11/2017");
    g1.add(gamePerson);
    g1.print("Game.txt");
    g1.print();
    
    inputFile.close();
    
    return 0;
}
