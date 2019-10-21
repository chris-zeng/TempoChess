#include "utility.h"
#include <iostream>
#include <bitset>

const std::string Utility::pretty(const Bitboard b) {
	std::string s = "+---+---+---+---+---+---+---+---+\n";
	for (Rank r = RANK_8; r >= RANK_1; --r)	{
		for (File f = FILE_A; f <= FILE_H; ++f) {
			s += b & (1ULL << make_square(f, r)) ? "| X " : "|   ";
		}
		s += "|\n+---+---+---+---+---+---+---+---+\n";
	}
	return s;
}
