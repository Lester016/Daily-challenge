package com.softieret;

/*
 Problem 7.
 Write a program named "StringsDemo.java", which reverses the characters of a string
 that uses both a String and a StringBuffer.
*/

public class Main {

    public static void main(String[] args) {
        // Given strings.
        String string = "This is a String";

        // Reversed the given string using the reverse() function of StringBuffer.
        StringBuffer reversed = new StringBuffer(string).reverse();

        // Output.
        System.out.println(string + " = " + reversed);
    }
}