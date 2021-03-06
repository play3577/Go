//
//  Board.h
//  Go
//
//  Created by Mark Boon on 6/7/13.
//  Copyright (c) 2013 Mark Boon. All rights reserved.
//

#ifndef __Go__Board__
#define __Go__Board__

#include "Array.h"
#include "Types.h"

namespace Go
{
    class Board
    {
    private:
        Byte _data[MAX_SIZE];
        int _boardSize = 9;
        
    public:
        Board(int boardSize);
        
        Byte& operator [](int index) { return _data[index]; }
        
        Byte get(int index) { return _data[index]; }

        void clear();
        void init();
        void copyFrom(const Board& src);
        void print();
        
        int getBoardSize() { return _boardSize; }
    };
}

#endif /* defined(__Go__Board__) */
