package com.wolfssl.wolfcrypt.fips;

import static org.junit.Assert.*;

import java.nio.ByteBuffer;

import org.junit.Test;

import com.wolfssl.wolfcrypt.Sha384;
import com.wolfssl.wolfcrypt.Util;
import com.wolfssl.wolfcrypt.WolfCrypt;
import com.wolfssl.wolfcrypt.Fips;

public class Sha384FipsTest {
	private ByteBuffer data = ByteBuffer.allocateDirect(32);
	private ByteBuffer result = ByteBuffer.allocateDirect(Sha384.DIGEST_SIZE);
	private ByteBuffer expected = ByteBuffer.allocateDirect(Sha384.DIGEST_SIZE);

	@Test
	public void initShouldReturnZero() {
		assertEquals(WolfCrypt.SUCCESS, Fips.InitSha384_fips(new Sha384()));
	}

	@Test
	public void hashShouldMatch() {
		String[] dataVector = new String[] { "", "c2edba56a6b82cc3",
				"2b1632b74a1c34b58af23274599a3aa1",
				"4a4c09366fb6772637d9e696f1d0d0a98005ca33bc01062a",
				"50b9952a9da3a1e704d22c414b4055a7b0866513dafd5f481023d958a9400b68" };
		String[] hashVector = new String[] {
				"38b060a751ac96384cd9327eb1b1e36a21fdb71114be07434c0cc"
						+ "7bf63f6e1da274edebfe76f65fbd51ad2f14898b95b",
				"03ca8e9a0da972814137eb37c5b8a59a7a0166c62f5d7eb643147"
						+ "2f79a33412cd3fa6c483da48e758fbc70027d132edf",
				"419a34764a30d5becda0d5eb33c67719b0d030fb2596b12d6207b"
						+ "329d45718cebd2c965b52ab538fbe68c90fab2878d7",
				"5388214cfa96289ac37b365226accf8b4022e5b931095ddfc4f59"
						+ "c47cb45e8a8fbd0c77f52eeacd2afaa61d653b40351",
				"7bcd20725ece37b040aa497832f3138e179da1a673714321fcba9"
						+ "7169a47199586dcb6599cf3f7d7497b85349f6f7b88" };

		for (int i = 0; i < dataVector.length; i++) {
			Sha384 sha = new Sha384();

			data.put(Util.h2b(dataVector[i])).rewind();
			expected.put(Util.h2b(hashVector[i])).rewind();

			assertEquals(WolfCrypt.SUCCESS, Fips.InitSha384_fips(sha));

			assertEquals(WolfCrypt.SUCCESS, Fips.Sha384Update_fips(sha, data,
					dataVector[i].length() / 2));

			assertEquals(WolfCrypt.SUCCESS, Fips.Sha384Final_fips(sha, result));

			assertEquals(expected, result);
		}
	}
}