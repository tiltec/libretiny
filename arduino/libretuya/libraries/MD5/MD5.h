/* Copyright (c) Kuba Szczodrzyński 2022-06-03. */

#pragma once

#include <Arduino.h>
#include <MD5Impl.h>

// available built-in implementations
#if LT_MD5_USE_POLARSSL
#include "MD5PolarSSLImpl.h"
#endif

// common API
#ifdef __cplusplus
extern "C" {
#endif

#ifndef LT_MD5_CTX_T
#define LT_MD5_CTX_T void
#endif

// for compatibility with ESP8266
typedef LT_MD5_CTX_T md5_context_t;

void MD5Init(LT_MD5_CTX_T *context);
void MD5Update(LT_MD5_CTX_T *context, const unsigned char *buf, unsigned len);
void MD5Final(unsigned char digest[16], LT_MD5_CTX_T *context);

#ifdef __cplusplus
}
#endif