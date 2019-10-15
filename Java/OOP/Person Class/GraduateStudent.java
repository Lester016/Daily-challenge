package com.softieret;

public class GraduateStudent extends Student {
    private String BachDeg; // Bachelor's Degree.
    private String SchAtt; // School Attended.

    public String getBachDeg() {
        return BachDeg;
    }

    public void setBachDeg(String bachDeg) {
        BachDeg = bachDeg;
    }

    public String getSchAtt() {
        return SchAtt;
    }

    public void setSchAtt(String schAtt) {
        SchAtt = schAtt;
    }


    public void display() {
        System.out.println("\nCalled within GraduateStudent Class");
        System.out.println("Name \t\t\t\t:\t " + getName());
        System.out.println("Age \t\t\t\t:\t " + getAge());
        System.out.println("College \t\t\t:\t " + getCollege());
        System.out.println("Course \t\t\t\t:\t " + getCourse());
        System.out.println("Department \t\t\t:\t " + getDepartment());
        System.out.println("Student ID \t\t\t:\t " + getStudentID());
        System.out.println("Bachelor's Degree \t:\t " + getBachDeg());
        System.out.println("School Attended \t:\t " + getSchAtt());
    }
}
