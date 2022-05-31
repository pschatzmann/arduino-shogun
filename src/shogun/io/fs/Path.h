#ifndef SHOGUN_PATH_H
#define SHOGUN_PATH_H

#include <string>
#ifdef ARDUINO_STRING_VIEW
#include "arduino/string_view.h"
#else
#include <string_view>
#endif

namespace shogun
{
	namespace io
	{
		namespace detail
		{
			std::string join_path(std::initializer_list<std::string_view> paths);
		}

#ifndef SWIG
		template <typename... T>
		std::string join_path(const T&... args)
		{
		  return detail::join_path({args...});
		}
#endif
		bool is_absolute_path(std::string_view path);

		void parse_uri(
			std::string_view remaining, std::string_view* scheme,
			std::string_view* host, std::string_view* path);
	}
}

#endif
