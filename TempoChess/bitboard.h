#ifndef BITBOARD_H_INCLUDED
#define BITBOARD_H_INCLUDED
#pragma once
#include "types.h"

namespace BitBoards{
	void init();
}
constexpr Bitboard AllSquares = ~Bitboard(0);
constexpr Bitboard BlackSquares = 0xAA55AA55AA55AA55ULL;
constexpr Bitboard WhiteSquares = ~BlackSquares;

constexpr Bitboard FileABB = 0x0101010101010101ULL;
constexpr Bitboard FileBBB = 0x0101010101010101ULL << 1;
constexpr Bitboard FileCBB = 0x0101010101010101ULL << 2;
constexpr Bitboard FileDBB = 0x0101010101010101ULL << 3;
constexpr Bitboard FileEBB = 0x0101010101010101ULL << 4;
constexpr Bitboard FileFBB = 0x0101010101010101ULL << 5;
constexpr Bitboard FileGBB = 0x0101010101010101ULL << 6;
constexpr Bitboard FileHBB = 0x0101010101010101ULL << 7;

constexpr Bitboard Rank1BB = 0xFFULL;
constexpr Bitboard Rank2BB = 0xFFULL << 8;
constexpr Bitboard Rank3BB = 0xFFULL << 16;
constexpr Bitboard Rank4BB = 0xFFULL << 24;
constexpr Bitboard Rank5BB = 0xFFULL << 32;
constexpr Bitboard Rank6BB = 0xFFULL << 40;
constexpr Bitboard Rank7BB = 0xFFULL << 48;
constexpr Bitboard Rank8BB = 0xFFULL << 56;

extern Bitboard w_pawn;
extern Bitboard w_knight;
extern Bitboard w_bishop;
extern Bitboard w_rook;
extern Bitboard w_queen;
extern Bitboard w_king;
extern Bitboard w_occupied;
extern Bitboard b_pawn;
extern Bitboard b_knight;
extern Bitboard b_bishop;
extern Bitboard b_rook;
extern Bitboard b_queen;
extern Bitboard b_king;
extern Bitboard b_occupied;

#endif