#ifndef PIGLATINCONVERTER_H
#define PIGLATINCONVERTER_H

#include <string>

// Forward declaration to avoid including LinkedList here
class LinkedList;

class PigLatinConverter {
public:
    PigLatinConverter() = default;

    // Convert a single word to Pig Latin using a LinkedList of characters.
    std::string convertWord(const std::string& word) const;

private:
    bool isVowel(char c) const;
};

#endif // PIGLATINCONVERTER_H

