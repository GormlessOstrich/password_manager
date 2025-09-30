#include "encryption.h"
#include <openssl/evp.h> // OpenSSL headers needed for encryption functions and random number generation.
#include <openssl/rand.h>
#include <stdexcept> // Allows throwing of exceptions.
#include <vector> // Allows for dynamic arrays that automatically resize themselves.

Encryption::Encryption(const std::string& password) : password(password) { // The "Encryption::" part specifies that this constructor belongs to the Encryption class.
    /* ": password(password)" is the member initialisation list. It initialises the member variable 'password' of the Encryption class.
    The left side "password" refers to the member variable of the class.
    The right side "(password)" refers to the parameter passed to the constructor.
    This syntax is used to initialise member variables before the constructor's body executes. It is particularly useful for initialising const members or references, which must be initialised upon creation.
    */
    // TEMP COMMENT Initialise any OpenSSL context as needed.
}