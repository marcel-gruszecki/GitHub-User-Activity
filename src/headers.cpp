//
// Created by Marcel on 30.03.2025.
//

#include "headers.h"
#include <iostream>
#include <string>
#include "cpr/cpr.h"
#include "nlohmann/json.hpp"
#include <cassert>
using json = nlohmann::json;

json get_api(std::string user)
{
    std::string link = "https://api.github.com/users/" + user + "/events";

    cpr::Response r = cpr::Get(cpr::Url{link});
    assert(r.status_code == 200);

    return json::parse(r.text);
}