#include <iostream>
#include <string>

int main() {
    std::string text;
    std::string word;

    std::getline(std::cin, text);
    std::getline(std::cin, word);

    int pos = text.find(word);
    if (pos != std::string::npos) {
        text.replace(pos, word.length(), "****");
    }

    text += " [Відредаговано]";
    std::cout << text << std::endl;
}