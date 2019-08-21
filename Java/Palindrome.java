package com.softieret;

/*
 Problem 8.
 Write a program named "Palindrome.java", that determines whether a string is a palindrome.
 Hint(Use the methods from the String and the StringBuffer classes).
*/

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // Created an Instance of Scanner Class.
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String input = scanner.nextLine();

        // Palindrome is not a case-sensitive so we make it lowercase for comparison eased.
        if (input.toLowerCase().equals(new StringBuffer(input).reverse().toString().toLowerCase())){
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }

    }
}