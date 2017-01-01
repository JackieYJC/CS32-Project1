//
//  History.h
//  Project 1
//
//  Created by JackieYJC on 1/12/16.
//  Copyright © 2016 JackieYJC. All rights reserved.
//

#ifndef History_h
#define History_h


class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;

private:
    int m_nRows;
    int m_nCols;
    char** m_record;
};

#endif /* History_h */
