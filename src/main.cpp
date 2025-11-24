#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    std::ifstream file("../maps/base0.json");
    if(!file.is_open()) {
        std::cerr << "Error: unable to open the file" << std::endl;
        return 1;
    }
    
    json mapData;
    file >> mapData;
    file.close();
    
    std::cout << "Parsed map:" << std::endl;
    std::cout << mapData.dump(4) << std::endl;
    
    if (mapData.contains("width")) {
        std::cout << "\nWidth:" << mapData["width"] << std::endl;
    }

    return 0;
}