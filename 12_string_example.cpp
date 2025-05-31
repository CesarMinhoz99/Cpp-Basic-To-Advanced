#include <iostream>
#include <string>    // Include the string library
#include <algorithm> // For transform (to change case)

// Note: We do NOT use 'using namespace std;'
// This avoids polluting the global namespace and prevents potential name conflicts.
// Writing 'std::' before standard-library names makes it clear where they come from.

int main() {
    // 1. Declaration and initialization of strings
    std::string emptyString;                      // Empty string
    std::string greeting = "Hello";               // Initialize with a literal
    std::string name;                             

    // 2. Input from user
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);                 // Read a line (including spaces)

    // 3. Concatenation
    std::string personalGreeting = greeting + ", " + name + "!";
    std::cout << personalGreeting << std::endl;   // Output the combined string

    // 4. Getting length
    std::cout << "Your name has " << name.length() << " characters." << std::endl;

    // 5. Comparing strings
    std::string secret = "@12345";
    if (name == secret) {
        std::cout << "You guessed the secret word!" << std::endl;
    } else {
        std::cout << "That is not the secret word." << std::endl;
    }

    // 6. Substring (extract a part of the string)
    if (name.length() >= 3) {
        std::string firstThree = name.substr(0, 3);    // From index 0, take 3 characters
        std::cout << "First three letters of your name: " << firstThree << std::endl;
    }

    // 7. Finding a substring
    std::string haystack = "C++ programming is fun";
    std::string needle = "programming";
    size_t position = haystack.find(needle);
    if (position != std::string::npos) {
        std::cout << "'" << needle << "' found at index " << position << std::endl;
    } else {
        std::cout << "'" << needle << "' not found in the sentence." << std::endl;
    }

    // 8. Changing case (convert to uppercase)
    std::string upperName = name;
    std::transform(upperName.begin(), upperName.end(), upperName.begin(), ::toupper);
    std::cout << "Name in uppercase: " << upperName << std::endl;

    // 9. Clearing a string
    emptyString = "This will be cleared.";
    emptyString.clear();                            // Now emptyString is ""
    std::cout << "After clearing, emptyString length = " << emptyString.length() << std::endl;

    // 10. Checking if a string is empty
    if (emptyString.empty()) {
        std::cout << "emptyString is empty." << std::endl;
    }

    return 0;   // End of program
}
