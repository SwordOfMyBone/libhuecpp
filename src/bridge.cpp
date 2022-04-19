#include "bridge.h"
#include <cpr/response.h>
using namespace huecpp;


Bridge::Bridge(std::string const &ip):_ip(ip){}

cpr::Response Bridge::get(){
	return cpr::Get(cpr::Url{"https://192.168.100.37/api/newdeveloper"});
}
