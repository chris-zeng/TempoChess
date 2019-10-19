#ifndef BITBOARD_H_INCLUDED
#define BITBOARD_H_INCLUDED
#pragma once
#include "types.h"

namespace BitBoards{
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
	constexpr Bitboard Rank2BB = 0xFFULL<<8;
	constexpr Bitboard Rank3BB = 0xFFULL<<16;
	constexpr Bitboard Rank4BB = 0xFFULL<<24;
	constexpr Bitboard Rank5BB = 0xFFULL<<32;
	constexpr Bitboard Rank6BB = 0xFFULL<<40;
	constexpr Bitboard Rank7BB = 0xFFULL<<48;
	constexpr Bitboard Rank8BB = 0xFFULL<<56;

	Bitboard w_pawn = 0xFF00ULL;
	Bitboard w_knight = 0x42ULL;
	Bitboard w_bishop = 0x24ULL;
	Bitboard w_rook = 0x81ULL;
	Bitboard w_queen = 0x8ULL;
	Bitboard w_king = 0x10ULL;
	Bitboard w_occupied = 0xFFFFULL;

	Bitboard b_pawn = 0xFF000000000000ULL;
	Bitboard b_knight = 0x4200000000000000ULL;
	Bitboard b_bishop = 0x2400000000000000ULL;
	Bitboard b_rook = 0x8100000000000000ULL;
	Bitboard b_queen = 0x1000000000000000ULL;
	Bitboard b_king = 0x1000000000000000ULL;
	Bitboard b_occupied = 0xFFFF000000000000ULL;
}

#endif