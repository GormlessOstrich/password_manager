#include "credential_manager.h"
#include "encryption.h"
#include <iostream>
#include <string>

int main() {
    CredentialManager manager;
    std::string command;
    
    while (true) {
        std::cout << "Enter command (add/view/delete/exit): ";
        std::cin >> command;
        
        if (command == "add") {
            std::string username, password;
            std::cout << "Enter username: ";
            std::cin >> username;
            std::cout << "Enter password: ";
            std::cin >> password;
            manager.addCredential(Credential(username, encrypt(password)));
        } else if (command == "view") {
            manager.viewCredentials();
        } else if (command == "delete") {
            std::string username;
            std::cout << "Enter username to delete: ";
            std::cin >> username;
            manager.deleteCredential(username);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Unknown command." << std::endl;
        }
    }
}
    
   
