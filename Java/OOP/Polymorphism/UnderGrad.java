package com.softieret;

public class UnderGrad extends Student {

    private String HSA; // High School Attended.
    private boolean Form137A;

    public String getHSA() {
        return HSA;
    }

    public void setHSA(String HSA) {
        this.HSA = HSA;
    }

    public boolean isForm137A() {
        return Form137A;
    }

    public void setForm137A(boolean form137A) {
        Form137A = form137A;
    }


    public void display() {
        System.out.println("\nCalled within GraduateStudent Class");
        System.out.println("Name \t\t\t\t\t:\t " + getName());
        System.out.println("Age \t\t\t\t\t:\t " + getAge());
        System.out.println("College \t\t\t\t:\t " + getCollege());
        System.out.println("Course \t\t\t\t\t:\t " + getCourse());
        System.out.println("Department \t\t\t\t:\t " + getDepartment());
        System.out.println("Student ID \t\t\t\t:\t " + getStudentID());
        System.out.println("High School Attended \t:\t " + getHSA());
        System.out.println("Submitted Form137A \t\t:\t " + isForm137A());
    }
}

