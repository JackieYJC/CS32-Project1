//
//  History.cpp
//  Project 1
//
//  Created by JackieYJC on 1/12/16.
//  Copyright © 2016 JackieYJC. All rights reserved.
//

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include "History.h"
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols)
{
    m_record = new char*[nRows];
    for (int i=0; i < nRows; i++) {
        m_record[i] = new char[nCols];
    }
    
    for (int i = 0; i < nRows; i++) {
        for (int h = 0; h < nCols; h++) {
            m_record[i][h] = '.';
        }
    }
    m_nRows = nRows;
    m_nCols = nCols;
}

bool History::record(int r, int c)
{
    if (r > m_nRows || c > m_nCols) {
        return false;
    }
    if (m_record[r-1][c-1] == '.') {
        m_record[r-1][c-1] = 'A';
    }
    else if (m_record[r][c] == 'Z'){
        ;
    }
    else{
        m_record[r-1][c-1] ++;
    }
    return true;
}
void History::display() const
{

    clearScreen();
    for (int i = 0; i < m_nRows; i++) {
        for (int h = 0; h < m_nCols; h++) {
            cout << m_record[i][h];

        }
        cout << endl;
    }
    cout << endl;
}

