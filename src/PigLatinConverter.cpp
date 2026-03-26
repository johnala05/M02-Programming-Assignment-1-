#include "PigLatinConverter.h"
#include "LinkedList.h"
#include <cctype>

bool PigLatinConverter::isVowel(char c) const {
    c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string PigLatinConverter::convertWord(const std::string& word) const {
    if (word.empty()) {
        return "";
    }

    LinkedList list;

    // Store characters of the word into the linked list
    for (char c : word) {
        list.append(c);
    }

    // If the word starts with a vowel, just add "way"
    if (list.startsWithVowel()) {
        list.append('w');
        list.append('a');
        list.append('y');
        return list.toString();
    }

    // Otherwise, rotate until the first letter is a vowel or we've rotated full length
    int len = list.length();
    int rotations = 0;

    while (!list.startsWithVowel() && rotations < len) {
        list.rotate();
        ++rotations;
    }

    // Add "ay" at the end
    list.append('a');
    list.append('y');

    return list.toString();
}
