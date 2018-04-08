#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector> 

class Student
{
private:    
    // data members 
	string student_name;
	int midterm_exam_grade;
	int final_exam_grade;
	vector<int> homework_grades_vector;
	
public:	
    // constructor 
    Student(string name, int midterm_grade, int final_grade);
    
    // methods
    string getName();
    int getMidterm();
    int getFinal();
    void addHomeworkGrade(int homework_grade);
    double calculateSemesterGrade();
    void printHomeworkGrades();
    void printStudentInformation();
};

#endif
