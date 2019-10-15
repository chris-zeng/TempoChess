#pragma once
#ifndef BITBOARD_H_INCLUDED
#define BITBOARD_H_INCLUDED

#include "types.h"

namespace BitBoards{
	constexpr Bitboard AllSquares = ~Bitboard(0);
	constexpr Bitboard WhiteSquares = 0xAA55AA55AA55AA55ULL;
	constexpr Bitboard BlackSquares = ~WhiteSquares;

	constexpr Bitboard FileABB = 0x8080808080808080ULL;
	constexpr Bitboard FileBBB = 0x8080808080808080ULL>>1;
	constexpr Bitboard FileCBB = 0x8080808080808080ULL>>2;
	constexpr Bitboard FileDBB = 0x8080808080808080ULL>>3;
	constexpr Bitboard FileEBB = 0x8080808080808080ULL>>4;
	constexpr Bitboard FileFBB = 0x8080808080808080ULL>>5;
	constexpr Bitboard FileGBB = 0x8080808080808080ULL>>6;
	constexpr Bitboard FileHBB = 0x8080808080808080ULL>>7;

	constexpr Bitboard Rank1BB = 0xFFULL;
	constexpr Bitboard Rank2BB = 0xFFULL<<8;
	constexpr Bitboard Rank3BB = 0xFFULL<<16;
	constexpr Bitboard Rank4BB = 0xFFULL<<24;
	constexpr Bitboard Rank5BB = 0xFFULL<<32;
	constexpr Bitboard Rank6BB = 0xFFULL<<40;
	constexpr Bitboard Rank7BB = 0xFFULL<<48;
	constexpr Bitboard Rank8BB = 0xFFULL<<56;




}

#endif BITBOARD_H_INCLUDED