#include <iostream>
#include <cctype>

int main() 
{
    std::string input;
    int vowelCount = 0, consonantCount = 0;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (std::string::iterator it = input.begin(); it != input.end(); ++it) {
        char ch = *it;
        if (std::isalpha(ch)) {
            char lowercaseCh = std::tolower(ch);
            if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' ||
                lowercaseCh == 'o' || lowercaseCh == 'u') 
			{
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    std::cout << "Number of vowels: " << vowelCount << std::endl;
    std::cout << "Number of consonants: " << consonantCount << std::endl;

    return 0;
}

