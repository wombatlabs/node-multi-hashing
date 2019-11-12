#ifndef BIZZIUM_H
#define BIZZIUM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void bizzium_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif 