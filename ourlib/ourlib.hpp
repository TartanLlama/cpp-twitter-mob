#pragma once

#include <string_view>

namespace ourlib {
	/// Calculates the brand-quotient of a given string
	/// The brand-quotient is defined as:
	/// - An integer is extracted from the string
	/// - The square root of the integer is taken
	/// - The integer representation of the root is returned
	/// - If any of these steps are invalid (no integer in the string, 
	///     integer is negative when squaring, or root is not a whole number), 
	///     42 is returned
	int brand_quotient(std::string_view sv);
}
