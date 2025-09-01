#include "encryption.h"
#include <algorithm>

std::string encrypt(const std::string& password) {
    std::string encrypted = password; // This example simply reverses the string.
    std::reverse(encrypted.begin(), encrypted.end());
    return encrypted;
}

std::string decrypt(const std::string& encryptedPassword) {
    std::string decrypted = encryptedPassword; // Revert string.
    std::reverse(decrypted.begin(), decrypted.end());
    return decrypted;
}
