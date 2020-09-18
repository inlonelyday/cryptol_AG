#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grain128.h"

int main() {
     printf("Hello, World!\n");
    //grain_state *grain = "ghj";
    //const unsigned char key = "zvfsdf";
    //const unsigned char iv = "sahjdfgsa";
    unsigned char* c = "r";
    unsigned long long clen = 7;

    const unsigned char* mp = "kjhdis";
    unsigned long long mlen = 7899;

    const unsigned char* adp = "252";
    unsigned long long adlen = 87;

    const unsigned char* nsec = "abc";
    const unsigned char* npubp = "nonj";
    const unsigned char* kp = "jesir";

    crypto_aead_encrypt(c, &clen, mp, mlen, adp, adlen, nsec, npubp, kp);
//    unsigned char fsr[128] = "01100000111100000000111000000000111100000000011000000000110011000011000000001110011101100001000111001110010010110101000101111011";
//    unsigned char fb = "cg";
//    shift(fsr[128],fb);
    printf("Hello!\n");
    return 0;
    //crypto_aead_decrypt();


}
