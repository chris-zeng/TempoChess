// TempoChess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
#include "bitboard.h"
#include "utility.h"

int main()
{
	BitBoards::init();
	std::cout << Utility::pretty(w_rook) << std::endl;

    return 0;
}

