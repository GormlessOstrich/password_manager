#include "credential_manager.h"
#include <iostream>
#include <vector>

std::vector<Credential> credentials; // Store credentials in a vector

void CredentialManager::addCredential(const Credential& credential) {
    credentials.push_back(credential);
    std::cout << "Credential added for user: " << credential.username << std::endl;
}

void CredentialManager::viewCredentials() {
    for (const auto& cred : credentials) {
        std::cout << "Username: " << cred.username << ", Password: " << cred.password << std::endl;
    }
}

void CredentialManager::deleteCredential(const std::string& username) {
    // Implement deletion logic
}
