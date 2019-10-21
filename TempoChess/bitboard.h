#ifndef BITBOARD_H_INCLUDED
#define BITBOARD_H_INCLUDED
#pragma once
#include "types.h"

namespace BitBoards{
	void init();
}

constexpr Bitboard ALLSQUARES = ~Bitboard(0);
constexpr Bitboard BLACKSQUARES = 0xAA55AA55AA55AA55ULL;
constexpr Bitboard WHITESQUARES = ~BLACKSQUARES;

constexpr Bitboard FILEABB = 0x0101010101010101ULL;
constexpr Bitboard FILEBBB = 0x0101010101010101ULL << 1;
constexpr Bitboard FILECBB = 0x0101010101010101ULL << 2;
constexpr Bitboard FILEDBB = 0x0101010101010101ULL << 3;
constexpr Bitboard FILEEBB = 0x0101010101010101ULL << 4;
constexpr Bitboard FILEFBB = 0x0101010101010101ULL << 5;
constexpr Bitboard FILEGBB = 0x0101010101010101ULL << 6;
constexpr Bitboard FILEHBB = 0x0101010101010101ULL << 7;

constexpr Bitboard RANK1BB = 0xFFULL;
constexpr Bitboard RANK2BB = 0xFFULL << 8;
constexpr Bitboard RANK3BB = 0xFFULL << 16;
constexpr Bitboard RANK4BB = 0xFFULL << 24;
constexpr Bitboard RANK5BB = 0xFFULL << 32;
constexpr Bitboard RANK6BB = 0xFFULL << 40;
constexpr Bitboard RANK7BB = 0xFFULL << 48;
constexpr Bitboard RANK8BB = 0xFFULL << 56;

typedef struct {
	Bitboard w_pawn;
	Bitboard w_knight;
	Bitboard w_bishop;
	Bitboard w_rook;
	Bitboard w_queen;
	Bitboard w_king;
	Bitboard w_occupied;
	Bitboard b_pawn;
	Bitboard b_knight;
	Bitboard b_bishop;
	Bitboard b_rook;
	Bitboard b_queen;
	Bitboard b_king;
	Bitboard b_occupied;

	unsigned short board[SQUARE_NB];

} ChessBoard;

extern ChessBoard board;
#endif