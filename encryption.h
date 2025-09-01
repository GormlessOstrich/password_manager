#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include <string>

std::string encrypt(const std::string& password);
std::string decrypt(const std::string& encryptedPassword);

#endif
