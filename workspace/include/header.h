#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <sodium.h>

// Initialization function
int initialize_sodium();

// Key pair generation function
void generate_keypair(unsigned char *public_key, unsigned char *private_key);

// Signature generation function
void sign_message(unsigned char *signature, const unsigned char *message, size_t message_len, const unsigned char *private_key);

// Signature verification function
int verify_signature(const unsigned char *signature, const unsigned char *message, size_t message_len, const unsigned char *public_key);

#endif /* HEADER_H */
