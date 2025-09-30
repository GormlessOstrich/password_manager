#ifndef ENCRYPTION_H // #include guards - "ensures that the compiler will process this file only once, no matter how many times it is included."
#define ENCRYPTION_H

#include <string>

class Encryption {
public: // Accessible from outside the class - other parts of the program can create instances of Encryption and call its public methods.
    Encryption(const std::string& password); // Constructor declaration - it initialises an instance of the class with a password.
    std::string encrypt(const std::string& data); // Takes a string (data) as input and returns an encrypted string. This method will use OpenSSL to perform the encryption.
    std::string decrypt(const std::string& encryptedData);

private: // Only accessible within the class itself.
    std::string password;
    // TEMP COMMENT Add any OpenSSL key variables here.
};

#endif