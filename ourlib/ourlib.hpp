#pragma once

#include <string_view>
#include "optional.hpp"

namespace ourlib {
	namespace detail {
		/// Interprets a signed integer value in the given string.
		/// Returns an empty optional if the string does not represent a valid int.
		tl::optional<int> safe_stoi(std::string_view sv);

		/// Returns the square root of the given int.
		/// The result is empty if `i` is negative.
		tl::optional<double> safe_sqrt(int i);

		/// Returns the integer representation of `d` if it is a whole number
		/// If `d` is not a whole number, returns an empty optional
		tl::optional<int> safe_dtoi(double d);
	}

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
