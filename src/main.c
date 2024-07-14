#include "../include/header.h"

int main() {
    if (initialize_sodium() < 0) {
        return 1;
    }

    // Generate key pair
    unsigned char public_key[crypto_sign_PUBLICKEYBYTES];
    unsigned char private_key[crypto_sign_SECRETKEYBYTES];
    generate_keypair(public_key, private_key);

    // Message
    const char *message = "Hello, Ed25519!";
    size_t message_len = strlen(message);

    // Generate signature
    unsigned char signature[crypto_sign_BYTES];
    sign_message(signature, (unsigned char *)message, message_len, private_key);

    // Verify signature
    int verify_status = verify_signature(signature, (unsigned char *)message, message_len, public_key);
    if (verify_status == 0) {
        printf("Signature verified successfully\n");
    } else {
        printf("Signature verification failed\n");
    }

    return 0;
}
