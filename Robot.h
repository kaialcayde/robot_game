//
//  Robot.hpp
//  P1.01
//
//  Created by Kai N. Alcayde on 7/2/21.
//

#ifndef Robot_h
#define Robot_h

#include <stdio.h>

class Arena;  // This is needed to let the compiler know that Arena is a
              // type name, since it's mentioned in the Robot declaration.

class Robot
{
  public:
        // Constructor
    Robot(Arena* ap, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool takeDamageAndLive();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};

#endif /* Robot_hpp */
