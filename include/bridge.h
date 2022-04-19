#ifndef BRIDGE_H
#define BRIDGE_H
#include <cpr/response.h>
#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>
#include <cpr/cpr.h>
#include <string>

namespace huecpp
{
	class Bridge {
		private:
			std::string const _ip;
			
		public:
			Bridge() = delete;
			Bridge(std::string const &ip);

			cpr::Response get();

			
	};

} /* huecpp */ 
#endif 
