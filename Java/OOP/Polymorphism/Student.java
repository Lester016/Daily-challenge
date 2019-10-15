package com.softieret;

// Student Class extends the Person Class.
public class Student extends Person {
    private int studentID;
    private String course;
    private String department;
    private String college;

    public int getStudentID() {
        return studentID;
    }

    public void setStudentID(int studentID) {
        this.studentID = studentID;
    }

    public String getCourse() {
        return course;
    }

    public void setCourse(String course) {
        this.course = course;
    }

    public String getDepartment() {
        return department;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public String getCollege() {
        return college;
    }

    public void setCollege(String college) {
        this.college = college;
    }
    @Override
    void display() {
        System.out.println("\nCalled within Student Class");
        System.out.println("Name \t\t:\t " + getName());
        System.out.println("Age \t\t:\t " + getAge());
        System.out.println("College \t:\t " + getCollege());
        System.out.println("Course \t\t:\t " + getCourse());
        System.out.println("Department \t:\t " + getDepartment());
        System.out.println("Student ID \t:\t " + getStudentID());
    }
}
