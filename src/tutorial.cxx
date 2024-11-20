#include <iostream>
// #include <cstdlib> // for atof

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
        return 1;
    }

    // double inputValue = atof(argv[1]);
    const double inputValue = std::stod(argv[1]);
    std::cout << "The value is: " << inputValue << std::endl;

    return 0;
}

// #include <iostream>
// #include <string> // for std::stod

// int main(int argc, char *argv[]) {
//     if (argc < 2) {
//         std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
//         return 1;
//     }

//     const double inputValue = std::stod(argv[1]);

//     std::cout << inputValue << std::endl;

//     // try {
//     //     double value = std::stod(argv[1]);
//     //     std::cout << "The value is: " << value << std::endl;
//     // } catch (const std::invalid_argument& e) {
//     //     std::cerr << "Error: Invalid argument. Could not convert to double." << std::endl;
//     //     return 1;
//     // } catch (const std::out_of_range& e) {
//     //     std::cerr << "Error: Out of range. The number is too large or too small." << std::endl;
//     //     return 1;
//     // }

//     return 0;
// }