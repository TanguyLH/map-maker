#include <iostream>
#include <fstream>
#include <map>
#include "json.hpp"

using json = nlohmann::json;

bool validateJson(json mapData);

int main() {
    
    std::map<int, char> mapAsciiTranslator = {
        { 0, '.'},
        { 1, '#'},
        { 2, '~'},
    };

    std::ifstream file("../maps/base0.json");
    if(!file.is_open()) {
        std::cerr << "Error: unable to open the file" << std::endl;
        return 1;
    }
    
    json mapData;
    file >> mapData;
    file.close();
    
    validateJson(mapData);
    
    for (int y = 0; y < mapData["height"]; y++) {
        for (int x = 0; x < mapData["width"]; x++) {
            std::cout << mapData["tiles"][y][x] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

bool validateJson(json mapData) {
    if (!mapData.contains("width")) {
        std::cout << "Width not found" << std::endl;
        return false;
    }

    if (!mapData.contains("width")) {
        std::cout << "Width not found" << std::endl;
        return false;
    }
    
    return true;
}