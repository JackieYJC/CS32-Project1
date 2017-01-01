//
//  main.cpp
//  Project 1
//
//  Created by JackieYJC on 1/11/16.
//  Copyright © 2016 JackieYJC. All rights reserved.
//

#include "Game.h"
#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;

int main()
{
    // Create a game
    // Use this instead to create a mini-game:   Game g(3, 4, 2);
    Game g(7, 8, 25);
    
    // Play the game
    g.play();
}
