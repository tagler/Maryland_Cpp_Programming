// C++ Programming Assessment #2 v3

// Extras
// - User input validation for exams and homework scores
// - constant spacing between homework grades display
// - semester grade formatted to 2 decimal places

#include <iostream>
#include <cstdio>
#include <string>
#include <limits.h>

using namespace std;

#include "Student.h"

// function prototypes
Student userStudentInput();
int askValidateInputExams();
int askValidateInputHomework(string input_name);

// main program ==============================================================

int main()
{
    // asks user for input and creates student object
    Student student_object = userStudentInput();

    // print student objet information
    student_object.printStudentInformation();

    // exit program without error
    return 0;
}

// functions ==================================================================

// user input and create student object function
Student userStudentInput()
{
    // define user input variables
    string input_name;
    int input_midterm, input_final, input_homework_grade;

    // calls functions to ask for user input and validates
    cout << endl << "Please input the student name: ";
    cin >> input_name;
    cout << "Please input " << input_name << "'s midterm grade: ";
    input_midterm = askValidateInputExams();
    cout << "Please input " << input_name << "'s final exam grade: ";
    input_final = askValidateInputExams();

    // create Student object with user inputs
    Student student(input_name, input_midterm, input_final);

    // ask user for homework grades until user enters quit value
    cout << "Please input " << input_name << "'s homework grades (-1 to end)\n";
    while (true)
    {
        input_homework_grade = askValidateInputHomework(input_name);
        // quit value, do not append to student object
        if (input_homework_grade == -1) break;
        // append to student object
        student.addHomeworkGrade(input_homework_grade);
    }

    // returns newly created student object to main program
    return student;
}

// asks user for input and validates exam scores (0-100)
int askValidateInputExams()
{
    // ask user for input
    int input_value;
    cin >> input_value;

    // loop if not valid input of 0-100
    while (cin.fail() || input_value < 0 || input_value > 100)
    {
        // ask user again for input
        cout << "Error: Please input a grade of 0-100: ";
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cin >> input_value;
    }
    // return valid input
    return input_value;
}

// asks user for homework input and validates 0-100 and -1 (quit value)
int askValidateInputHomework(string input_name)
{
    // ask user for input
    int input_value;
    cin >> input_value;

    // loop if not valid input of 0-100 or quit value
    while ( ( cin.fail() || input_value < 0 || input_value > 100 ) &&
            input_value != -1 )
    {
        // ask user again for input
        cout << "Error: Please input " << input_name <<
                "'s homework grades of 0-100 (-1 to quit)\n";
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cin >> input_value;
    }
    // return valid input
    return input_value;
}
