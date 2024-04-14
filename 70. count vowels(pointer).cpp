#include <iostream>
using namespace std;

int main() {
    char str[] = "aeiouBCD";
    int vowelCount = 0;
    int consonantCount = 0;

    char* sptr = str;

    // Iterate the loop until null character encounter
    while (*sptr != '\0') {

        // Check whether character pointer finds any vowels
        if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'
            || *sptr == 'o' || *sptr == 'u') {

            // If vowel found increment the count
            vowelCount++;
        } else {
            // If not vowel, consider it as consonant
            consonantCount++;
        }

        // Increment the pointer to next location
        // of address
        sptr++;
    }

    cout << "Consonant count: " << consonantCount << endl;
    cout << "Vowel count: " << vowelCount << endl;

    return 0;
}

