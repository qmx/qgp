#ifndef _ZBASE56_H_
#define _ZBASE56_H_

#include <stdint.h>

int zbase56_dec(const uint8_t *input, uint8_t *output, int outputLen);
int zbase56_enc(const uint8_t *input, int len, uint8_t *output, int outputLen);

#endif