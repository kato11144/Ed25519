#include "../include/header.h"

// Initialization function
int initialize_sodium() {
    if (sodium_init() < 0) {
        fprintf(stderr, "Libsodium initialization failed\n");
        return -1;
    }
    return 0;
}

// Key pair generation function
void generate_keypair(unsigned char *public_key, unsigned char *private_key) {
    crypto_sign_keypair(public_key, private_key);
}

// Signature generation function
void sign_message(unsigned char *signature, const unsigned char *message, size_t message_len, const unsigned char *private_key) {
    crypto_sign_detached(signature, NULL, message, message_len, private_key);
}

// Signature verification function
int verify_signature(const unsigned char *signature, const unsigned char *message, size_t message_len, const unsigned char *public_key) {
    return crypto_sign_verify_detached(signature, message, message_len, public_key);
}
