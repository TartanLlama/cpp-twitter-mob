#include <string_view>
#include <string>
#include "ourlib.hpp"
namespace ourlib {
	namespace detail {
		tl::optional<int> safe_stoi(std::string_view sv) {
			try {
				return std::stoi(std::string(sv));
			} catch (std::exception) {
				return tl::nullopt;
			}
		}
	}
}

int ourlib::brand_quotient(std::string_view sv) {
	//TODO implement
	return 42;
}

