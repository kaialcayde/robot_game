//
//  Previous.hpp
//  P1.01
//
//  Created by Kai N. Alcayde on 7/2/21.
//

#ifndef Previous_h
#define Previous_h

#include <stdio.h>


#include "globals.h"

using namespace std;

class Previous
{
public:
    Previous(int nRows, int nCols);
    bool dropACrumb(int r, int c);
    void showPreviousMoves() const;
    ~Previous();
private:
    int m_row;
    int m_col;
    char prev[MAXROWS][MAXCOLS];
    int m_crumbs;
};
#endif /* Previous_hpp */
