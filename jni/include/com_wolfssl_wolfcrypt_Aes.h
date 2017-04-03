/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_wolfcrypt_Aes */

#ifndef _Included_com_wolfssl_wolfcrypt_Aes
#define _Included_com_wolfssl_wolfcrypt_Aes
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wolfssl_wolfcrypt_Aes_NULL
#define com_wolfssl_wolfcrypt_Aes_NULL 0LL
#undef com_wolfssl_wolfcrypt_Aes_KEY_SIZE_128
#define com_wolfssl_wolfcrypt_Aes_KEY_SIZE_128 16L
#undef com_wolfssl_wolfcrypt_Aes_KEY_SIZE_192
#define com_wolfssl_wolfcrypt_Aes_KEY_SIZE_192 24L
#undef com_wolfssl_wolfcrypt_Aes_KEY_SIZE_256
#define com_wolfssl_wolfcrypt_Aes_KEY_SIZE_256 32L
#undef com_wolfssl_wolfcrypt_Aes_BLOCK_SIZE
#define com_wolfssl_wolfcrypt_Aes_BLOCK_SIZE 16L
#undef com_wolfssl_wolfcrypt_Aes_ENCRYPT_MODE
#define com_wolfssl_wolfcrypt_Aes_ENCRYPT_MODE 0L
#undef com_wolfssl_wolfcrypt_Aes_DECRYPT_MODE
#define com_wolfssl_wolfcrypt_Aes_DECRYPT_MODE 1L
/*
 * Class:     com_wolfssl_wolfcrypt_Aes
 * Method:    mallocNativeStruct
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_wolfcrypt_Aes_mallocNativeStruct
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Aes
 * Method:    native_set_key
 * Signature: ([B[BI)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Aes_native_1set_1key
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jint);

/*
 * Class:     com_wolfssl_wolfcrypt_Aes
 * Method:    native_update
 * Signature: (I[BII[BI)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_wolfcrypt_Aes_native_1update__I_3BII_3BI
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint, jbyteArray, jint);

/*
 * Class:     com_wolfssl_wolfcrypt_Aes
 * Method:    native_update
 * Signature: (ILjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_wolfcrypt_Aes_native_1update__ILjava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2I
  (JNIEnv *, jobject, jint, jobject, jint, jint, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
