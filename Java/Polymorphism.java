package com.softieret;

// OOP Polymorphism.
public class Main {
    public static void main(String[] args) {
        // Base Class
        Person person = new Person();
        person.setName("Lester");
        person.setAge(20);
        person.display();

        // Student Class
        Student student = new Student();
        student.setName("Lester in Student Class");
        student.setAge(21);
        student.setCollege("College Of Science");
        student.setCourse("BSCS");
        student.setDepartment("Math Department");
        student.setStudentID(1234);
        student.display();

        // GraduateStudent Class
        GraduateStudent gradStud = new GraduateStudent();
        gradStud.setName("Graduate na si Lester <3");
        gradStud.setAge(22);
        gradStud.setCollege("College Of Science");
        gradStud.setCourse("BSCS");
        gradStud.setDepartment("Math Department");
        gradStud.setStudentID(1234);
        gradStud.setBachDeg("Bachelor of Science in Computer Science");
        gradStud.setSchAtt("Technological University of the Philippines");
        gradStud.display();

        // UnderGrad Class
        UnderGrad underGrad = new UnderGrad();
        underGrad.setName("Hindi Graduate na Lester");
        underGrad.setAge(20);
        underGrad.setCollege("College Of Science");
        underGrad.setCourse("BSCS");
        underGrad.setDepartment("Math Department");
        underGrad.setStudentID(1234);
        underGrad.setHSA("Victorino Mapa High School");
        underGrad.setForm137A(true);
        underGrad.display();
    }
}


