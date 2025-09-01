#ifndef CREDENTIAL_MANAGER_H
#define CREDENTIAL_MANAGER_H
#include <string>

class Credential {
    public:
    std::string username;
    std::string password; // Store encrypted password
    // Add other fields as needed (e.g., creation date)
    
    Credential(const std::string& user, const std::string& pass)
    : username(user), password(pass) {}
};

class CredentialManager {
    public:
    void addCredential(const Credential& credential);
    void viewCredentials();
    void deleteCredential(const std::string& username);
    // Add other methods as needed
};

#endif // CREDENTIAL_MANAGER_H
