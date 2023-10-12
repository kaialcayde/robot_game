//
//  Game.hpp
//  P1.01
//
//  Created by Kai N. Alcayde on 7/2/21.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
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

#endif /* Game_hpp */
