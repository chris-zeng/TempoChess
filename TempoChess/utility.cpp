#include "utility.h"
#include "types.h"

#include <iostream>

namespace Utility {
	const std::string Utility::pretty(const Bitboard b) {
		std::string s = "+---+---+---+---+---+---+---+---+\n";
		for (Rank r = RANK_8; r >= RANK_1; --r)	{
			for (File f = FILE_A; f <= FILE_H; ++f)
				s += b & make_square(f, r) ? "| X " : "|   ";
			s += "|\n+---+---+---+---+---+---+---+---+\n";
		}

		return s;
	}
}