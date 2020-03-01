#include <iostream>
#include <string>
#include <algorithm>
#include <filesystem>

int main(int argc, char *argv[])
{
    std::string path(argv[1]);
    int count(1);
    for (const auto& dir_entry : std::filesystem::directory_iterator(path)) {
        std::cout << dir_entry.path().string();
    }

}