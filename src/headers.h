//
// Created by Marcel on 30.03.2025.
//

#ifndef HEADERS_H
#define HEADERS_H
#include <iostream>
#include "cpr/cpr.h"
#include "nlohmann/json.hpp"
using json = nlohmann::json;

json get_api(std::string user);

#endif //HEADERS_H
