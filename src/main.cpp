#include <iostream>
#include <sstream>
#include <string>
#include "PigLatinConverter.h"

int main() {
    std::cout << "Enter a word or phrase: ";
    std::string line;
    std::getline(std::cin, line);

    PigLatinConverter converter;

    std::stringstream ss(line);
    std::string word;
    std::string result;

    bool firstWord = true;

    // Process each word separately
    while (ss >> word) {
        std::string pigWord = converter.convertWord(word);

        if (!firstWord) {
            result += " ";
        }
        result += pigWord;
        firstWord = false;
    }

    std::cout << "Pig Latin: " << result << std::endl;

    return 0;
}
