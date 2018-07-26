/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_wolfcrypt_Chacha */

#ifndef _Included_com_wolfssl_wolfcrypt_Chacha
#define _Included_com_wolfssl_wolfcrypt_Chacha
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wolfssl_wolfcrypt_Chacha_NULL
#define com_wolfssl_wolfcrypt_Chacha_NULL 0LL
/*
 * Class:     com_wolfssl_wolfcrypt_Chacha
 * Method:    mallocNativeStruct
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_wolfcrypt_Chacha_mallocNativeStruct
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Chacha
 * Method:    wc_Chacha_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Chacha_wc_1Chacha_1init
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Chacha
 * Method:    wc_Chacha_free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Chacha_wc_1Chacha_1free
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Chacha
 * Method:    wc_Chacha_process
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_wolfcrypt_Chacha_wc_1Chacha_1process
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_wolfssl_wolfcrypt_Chacha
 * Method:    wc_Chacha_setKey
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Chacha_wc_1Chacha_1setKey
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_wolfssl_wolfcrypt_Chacha
 * Method:    wc_Chacha_setIV
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Chacha_wc_1Chacha_1setIV
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif