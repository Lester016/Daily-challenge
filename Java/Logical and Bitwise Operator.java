package com.softieret;

/*
 Problem 4.
 What are the values of the following expressions? First, do the computations mentally.
 Then write a program to verify your answer.
*/

public class Main {

    public static void main(String[] args) {
        // (true | false) = false.
        // (false | !(true | false)) = false.
        // (true & (false | !(true | false))) = false.
        // (true ^ (true & (false | !(true | false)))) = true.
        // false & ((true ^ (true & (false | !(true | false))))) = false.
        // (false & ((true ^ (true & (false | !(true | false))))) ^ true) = true.
        System.out.println(false & ((true ^ (true & (false | !(true | false))))) ^ true);

        // !(true & true) = false.
        // (false | !(true & true)) = false.
        // true ^ false ^ false ^ true = false.
        // (true ^ false ^ false ^ true & (false | !(true & true))) = true.
        // (true | (true ^ false ^ false ^ true & (false | !(true & true)))) = true.
        System.out.println(true | (true ^ false ^ false ^ true & (false | !(true & true))));
    }
}
