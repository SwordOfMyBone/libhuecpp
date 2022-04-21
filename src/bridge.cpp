#include "src/bridge.h"
#include <cpr/response.h>

huecpp::Bridge::Bridge(std::string const &ip) : _ip(ip) {}

cpr::Response huecpp::Bridge::get() {
  return cpr::Get(cpr::Url{"https://192.168.100.37/api/newdeveloper"});
}
