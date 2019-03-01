#include "ourlib\ourlib.hpp"
#include <vector>
#include <string_view>
#include <iostream>

int main() {
	std::vector<std::string_view> data{
		"123",
		"-123",
		"ueoa",
		"9"
	};

	for (auto const& s : data) {
		std::cout << ourlib::brand_quotient(s) << '\n';
	}
}