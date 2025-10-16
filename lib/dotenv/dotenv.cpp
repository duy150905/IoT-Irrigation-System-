#include <string>
// library for reading/writing files
#include <fstream>
/* <sctdlib> is general purpose function
like memory management, random number, and system commands
(it's like <stdlib.h> in C */
#include <cstdlib>

void load_env(const std::string& filename = ".env") {
    // read file
    std::ifstream file(filename);
    // define a string to contain each line
    std::string line;

    // loop through each line in a file
    while (std::getline(file, line)) {
        size_t pos = line.find("=");
        if (pos != std::string::npos) {
            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos + 1);
            setenv(key.c_str(), value.c_str(), 1);
        }
    }

    file.close();
}
