//
//  Arena.h
//  Project 1
//
//  Created by JackieYJC on 1/11/16.
//  Copyright © 2016 JackieYJC. All rights reserved.
//

#ifndef Arena_h
#define Arena_h

#include "globals.h"
#include "History.h"

class Player;
class Robot;


class Arena
{
public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    bool    determineNewPosition(int& r, int& c, int dir) const;
    void    display() const;
    History& history();
    
    // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    bool   attackRobotAt(int r, int c, int dir);
    bool   moveRobots();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    int     m_nRobots;
    History m_history;
};

#endif /* Arena_h */
