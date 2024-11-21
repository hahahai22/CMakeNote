#include <iostream>
#include "TutorialConfig.h"
// #include <cstdlib> // for atof

int main(int argc, char *argv[])
{
    std::cout << "project Name " << PROJECT_NAME << std::endl;
    std::cout << "project Version " << PROJECT_VERSION << std::endl;

    if (argc < 2)
    {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }
    return 0;
}