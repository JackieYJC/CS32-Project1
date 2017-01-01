//
//  Game.h
//  Project 1
//
//  Created by JackieYJC on 1/11/16.
//  Copyright © 2016 JackieYJC. All rights reserved.
//

#ifndef Game_h
#define Game_h

class Arena;
class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};


#endif /* Game_h */
