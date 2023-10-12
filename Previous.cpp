//
//  Previous.cpp
//  P1.01
//
//  Created by Kai N. Alcayde on 7/2/21.
//

#include "Previous.h"
#include "Game.h"
#include "globals.h"
#include "Arena.h"
#include "Player.h"
#include "Robot.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

Previous::Previous(int nRows, int nCols)
{
    m_row = nRows;
    m_col = nCols;
    m_crumbs = 0;
    int r, c;
    
    // Fill the grid with dots
    for (r = 0; r < m_row; r++)
      for (c = 0; c < m_col; c++)
          prev[r][c] = '.';
    
    
}

Previous::~Previous()
{

}

bool Previous::dropACrumb(int r, int c)
{
    m_crumbs = 0;
    if (r >= m_row || c >= m_col)
        return false;
    else
    {
        if(prev[r][c] == '.')
            prev[r][c] = 'A';
        else
            if(prev[r][c] != 'Z')
            prev[r][c] += 1;
    }
        
    return true;
}



//only one that can cout

void Previous::showPreviousMoves() const
{
    // Draw the grid
    int r, c;
    
clearScreen();
for (r = 0; r < m_row; r++)
{
    for (c = 0; c < m_col; c++)
    {
        cout << prev[r][c];
            
    }
    cout << endl;
}
    
    cout << endl;
    
}


