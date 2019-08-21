package com.softieret;

/*
 Problem 5.
 Write a program that defines two integers and two double-precision floating-point numbers
 and uses the five arithmetic operators to perform different arithmetic operations.
*/

public class Main {

    public static void main(String[] args) {
        // Declaration and assignment of variables.
	    int int1 = 1, int2 = 2;
	    double double1 = 3.4, double2 = 5.6;

        System.out.println("int1 = "+ int1 + ", int2 = "+ int2 + ", double1 = "+ double1 + ", double2 = "+double2);

        // Addition Operator.
        System.out.println("int1 + int2 = " + (int1 + int2));
        System.out.println("double1 + double2 = " + (double1 + double2));

        // Subtraction Operator.
        System.out.println("int1 - int2 = " + (int1 - int2));
        System.out.println("double1 - double2 = " + (double1 - double2));

        // Multiplication Operator.
        System.out.println("int1 * int2 = " + (int1 * int2));
        System.out.println("double1 * double2 = " + (double1 * double2));

        // Division Operator.
        System.out.println("int1 / int2 = " + (int1 / int2));
        System.out.println("double1 / double2 = " + (double1 / double2));

        // Modulo Operator.
        System.out.println("int1 % int2 = " + (int1 % int2));
        System.out.println("double1 % double2 = " + (double1 % double2));
    }
}
