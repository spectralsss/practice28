#include <iostream>
#include <string>

int main() {
    std::string email;
    std::getline(std::cin, email);

    int atPos = email.find('@');
    if (atPos != std::string::npos) {
        std::string user = email.substr(0, atPos);
        std::string domain = email.substr(atPos + 1);

        std::cout << user << std::endl;
        std::cout << domain << std::endl;
    }
}