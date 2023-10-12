//
//  Arena.hpp
//  P1.01
//
//  Created by Kai N. Alcayde on 7/2/21.
//

#ifndef Arena_h
#define Arena_h


#include "globals.h"
#include <string>
#include <stdio.h>
#include "Previous.h"
class Player;
class Robot;

class Arena
{
  public:
        // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
    Previous& thePrevious();

        // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    void    display(string msg) const;

        // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    void   damageRobotAt(int r, int c);
    bool   moveRobots();

  private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    int     m_nRobots;
    Previous m_previous;
};



#endif /* Arena_hpp */
