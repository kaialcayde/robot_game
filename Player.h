//
//  Player.hpp
//  P1.01
//
//  Created by Kai N. Alcayde on 7/2/21.
//

#ifndef Player_h
#define Player_h


#include <stdio.h>
#include <string>




class Arena;  // This is needed to let the compiler know that Arena is a
              // type name, since it's mentioned in the Player declaration.

class Player
{
  public:
        // Constructor
    Player(Arena *ap, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;

        // Mutators
    std::string takeComputerChosenTurn();
    void   stand();
    void   move(int dir);
    bool   shoot(int dir);
    void   setDead();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_age;
    bool   m_dead;

    int    computeDanger(int r, int c) const;
};

#endif /* Player_hpp */
