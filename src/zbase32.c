#include "zbase32.h"

static const char zbase32_alphabet[32] = {
	'y', 'b', 'n', 'd', 'r', 'f', 'g', '8',
	'e', 'j', 'k', 'm', 'c', 'p', 'q', 'x',
	'o', 't', '1', 'u', 'w', 'i', 's', 'z',
	'a', '3', '4', '5', 'h', '7', '6', '9'
};

int zbase32_dec(const uint8_t *input, uint8_t *output, int outputLen) {
    return -1;
}
int zbase32_enc(const uint8_t *input, int len, uint8_t *output, int outputLen) {
    return -1;
}