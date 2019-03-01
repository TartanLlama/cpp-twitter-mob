#include <string_view>
#include "optional.hpp"
#include "ourlib.hpp"
namespace {
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

int ourlib::brand_quotient(std::string_view sv) {
	//TODO implement
	return 42;
}

