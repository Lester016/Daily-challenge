package com.softieret;

// Write a program that prints out the following values (bitwise operator).

public class Main {

    public static void main(String[] args) {
        System.out.println(32 << 3); // 32 * 2 ^ 3
        System.out.println(32 >> 3); // 32 / 2 ^ 3
        System.out.println(32 >>> 3); // For positive number, >> and >>> works same.
        System.out.println(-32 << 3); // -32 * 2 ^ 3
        System.out.println(-32 >> 3); // -32 / 2 ^ 3
        System.out.println(-32 >>> 3); // For negative number, >>> changes parity bit (MSB) to 0.
    }
}
