#include "bitboard.h"

Bitboard w_pawn;
Bitboard b_pawn;
Bitboard b_rook; 

void BitBoards::init() {
	w_pawn = 0xFF00ULL;
	b_pawn = 0xFF000000000000ULL;
	b_rook = 0x8100000000000000;
	/*
	w_pawn = 0xFF00ULL;
	w_knight = 0x42ULL;
	w_bishop = 0x24ULL;
	w_rook = 0x81ULL;
	w_queen = 0x8ULL;
	w_king = 0x10ULL;
	w_occupied = 0xFFFFULL;
	b_pawn = 0xFF000000000000ULL;
	b_knight = 0x4200000000000000ULL;
	b_bishop = 0x2400000000000000ULL;
	b_rook = 0x8100000000000000ULL;
	b_queen = 0x1000000000000000ULL;
	b_king = 0x1000000000000000ULL;
	b_occupied = 0xFFFF000000000000ULL;
	*/
}