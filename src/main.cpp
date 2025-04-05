#include <iostream>
#include <unordered_map>
#include <cassert>
#include "headers.h"
#include "cpr/cpr.h"
#include "nlohmann/json.hpp"

using json = nlohmann::json;

int main(int argc, char* argv[]) {
    assert(argc == 2);

    json j = get_api(argv[1]);

    std::unordered_map<std::string, int> events;

    for (const auto& i : j) {
        std::string type = i["type"];
        events.try_emplace(type, 0);
        events[type]++;
    }
    std::cout << argv[1] << ":" << std::endl;
    for (const auto& [key, value] : events) {
        std::cout << key << ": " << value << "\n";
    }
    return 0;
}