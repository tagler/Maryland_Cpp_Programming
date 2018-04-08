#include <iostream>
#include <string> 
#include <iomanip>
#include <vector> 
#include <cstdio>

using namespace std;

#include "Student.h"

// constructor 
Student::Student(string name, int midterm_grade, int final_grade)
{
    // required data 
    student_name = name;
    midterm_exam_grade = midterm_grade;
    final_exam_grade = final_grade;
}

// return student name
string Student::getName()
{
    return student_name;
}

// return midterm grade
int Student::getMidterm()
{
    return midterm_exam_grade;
}

// return final exam grade
int Student::getFinal()
{
    return final_exam_grade;
}

// appends input to homework_grades vector
void Student::addHomeworkGrade(int homework_grade)
{
    homework_grades_vector.push_back(homework_grade);
}

// calculates semester grade
double Student::calculateSemesterGrade()
{
    // defines varialbes for average homework grade calculation 
    double average_homework_grades = 0;
    int homework_sum = 0;

    // loops through homework grade vector to calculate homework grade sum
    int index_max_size = homework_grades_vector.size();
    for (int vector_index = 0; vector_index < index_max_size; vector_index++)
    {
        homework_sum += homework_grades_vector[vector_index];
    }
    
    // calculates average homework grade 
    // if no homework grades are entered, will default to 0
    if (index_max_size != 0)
    {
        average_homework_grades = (double) homework_sum / index_max_size;
    }
    
    // returns semester grade (20% midterm, 30% final, and 50% homework)
    return ( 0.20 * midterm_exam_grade + 0.30 * final_exam_grade +
             0.50 * average_homework_grades );
}

// prints homework grades
void Student::printHomeworkGrades()
{
    int index_max_size = homework_grades_vector.size();
    for (int vector_index = 0; vector_index < index_max_size; vector_index++)
    {
        // value of vector at index 
        int vector_value = homework_grades_vector[vector_index];
        
        // determines the number of digits of vector value
        // to ensure correct spacing with output formatting
        int starting_value = vector_value, digits=1;
        for (; starting_value != 0; starting_value /= 10)
        {
            digits++;
        }
     
        // use std output formatting to provide exatly 1 space betwwen values 
        if (vector_value == 0) digits++;
        cout << left << setw(digits) << vector_value;
    }
    
    // print if no homework scores entered
    if (index_max_size == 0) cout << "No homework grades entered!";
}

// prints students information (name and grades)
void Student::printStudentInformation()
{
    // prints data 
    cout << endl << "Student Information: " << endl; 
    cout << "Name: " << student_name << endl;
    cout << "Midterm: " << midterm_exam_grade << endl;
    cout << "Final Exam: " << final_exam_grade << endl;
    cout << "Homework Grades:" << endl << endl;
    printHomeworkGrades();
    
    // prints calculated semester grade 
    double semester_grade = calculateSemesterGrade();
    cout << endl << endl;
    printf("Semester Grade: %.2f", semester_grade);
    cout << endl << endl;
}
