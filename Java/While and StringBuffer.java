package com.softieret;

/*
 Problem 6.
 Write a program that uses a while statement to step through the characters of a string,
 appending each character from the string to the end of a string buffer until in encounters
 the letter g.
*/

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // Object Declaration.
        Scanner scanner = new Scanner(System.in);
        StringBuffer stringBuffer = new StringBuffer();

        System.out.println("Enter a string: ");
        String input = "";


        while (true){
            input = scanner.nextLine(); // Scan a string input.
            input = stringBuffer.append(input).toString(); // Append the input into the previous input.

            // Terminate the program if it encounters the character "g".
            if (input.contains("g")) {
                System.out.println("'g' found at index:" + (input.indexOf("g") + 1));
                System.out.println(input.substring(0, input.indexOf("g")+1)); // The character that follows the g won't be appended.
                break;
            }
            System.out.println(input);
        }

    }
}
