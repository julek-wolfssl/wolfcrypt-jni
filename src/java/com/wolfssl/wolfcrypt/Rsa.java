package com.wolfssl.wolfcrypt;

import java.nio.ByteBuffer;

/**
 * Wrapper for the native WolfCrypt Rsa implementation.
 *
 * @author Moisés Guimarães
 * @version 1.0, March 2015
 */
public class Rsa extends NativeStruct {

	protected native long mallocNativeStruct() throws OutOfMemoryError;
	
	public native void decodeRawPublicKey(ByteBuffer n, long nSize,
			ByteBuffer e, long eSize);
}