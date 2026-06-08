#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

int main() {
    std::string text;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::unordered_map<std::string, int> wordCount;
    std::stringstream ss(text);
    std::string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    std::cout << "\n";
    int maxCount = 0;
    std::string mostFrequentWord;

    for (auto pair : wordCount) {
        std::cout << pair.first << "-> " << pair.second << std::endl;
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentWord = pair.first;
        }
    }

    if (!wordCount.empty()) {
        std::cout << "\n";
        std::cout << "The most frequent word: " << mostFrequentWord << "-> " << maxCount;
    }

    return 0;
}
