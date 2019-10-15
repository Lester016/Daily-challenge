package com.softieret;

public class Person {
    // Field or Variables.
    private String name;
    private int age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    void display() {
        System.out.println("Called within Person Class");
        System.out.println("Name \t\t:\t " + this.name);
        System.out.println("Age \t\t:\t " + this.age);
    }
}
