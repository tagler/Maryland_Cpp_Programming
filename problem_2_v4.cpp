// C++ Programming Assessment #2 v4

// Extras
// - User input validation for exams and homework grades (0-100)
// - constant spacing between homework grades
// - semester grade output formatted to 2 decimal places

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <limits.h>

using namespace std;

#include "Student.h"

// function prototypes
Student userStudentInput();
int askValidateInputExams();
int askValidateInputHomework(string input_name);
bool onlyDigits(string input_value);

// main program ==============================================================

int main()
{
    // asks user for inputs and creates student object
    Student student_object = userStudentInput();

    // print student objet information
    student_object.printStudentInformation();

    // exit program
    return 0;
}

// functions ==================================================================

// user input and create student object function
Student userStudentInput()
{
    // define user input variables
    string input_name;
    int input_midterm, input_final, input_homework_grade;

    // calls functions to ask for inputs and validate
    cout << endl << "Please input the student name: ";
    cin >> input_name;
    cout << "Please input " << input_name << "'s midterm grade: ";
    input_midterm = askValidateInputExams();
    cout << "Please input " << input_name << "'s final exam grade: ";
    input_final = askValidateInputExams();

    // create Student object with inputs
    Student student(input_name, input_midterm, input_final);

    // ask user for homework grades until user enters quit value
    cout << "Please input " << input_name << "'s homework grades (-1 to end)\n";
    while (true)
    {
        input_homework_grade = askValidateInputHomework(input_name);
        // append homework grade to student object
        if (input_homework_grade != -1)
        {
            student.addHomeworkGrade(input_homework_grade);
        }
        // stop appending when quit value entered
        else break;
    }

    // returns created student object to main program
    return student;
}

// asks user for input and validates exam scores (0-100)
int askValidateInputExams()
{
    // ask user for input
    string input_value;
    cin >> input_value;

    // check for exception case
    if (input_value == "100")
    {
        // return exception case
        return atoi(input_value.c_str());
    }

    // check for valid input format
    else
    {
        // loop if invalid format
        while ( input_value.length() > 2 || !onlyDigits(input_value) )
        {
            // ask user again for input
            cout << "Error: Please input a grade from 0-100: ";
            cin >> input_value;
            // check for exception case
            if (input_value == "100") break;
        }

        // return valid input
        return atoi(input_value.c_str());
    }
}

// asks user for homework input and validates 0-100 and -1 (quit value)
int askValidateInputHomework(string input_name)
{
    // ask user for input
    string input_value;
    cin >> input_value;

    // check for exception cases
    if (input_value == "100" || input_value == "-1")
    {
        // return exception cases
        return atoi(input_value.c_str());
    }

    // check for valid input format
    else
    {
        // loop if invalid format
        while ( input_value.length() > 2 || !onlyDigits(input_value) )
        {
            // ask user again for input
            cout << "Error: Please input " << input_name <<
                    "'s homework grades from 0-100 (-1 to end)\n";
            cin >> input_value;
            // check for exception cases
            if (input_value == "100" || input_value == "-1") break;
        }

        // return valid input
        return atoi(input_value.c_str());
    }
}

// checks if input string contains only digits
bool onlyDigits(string input_value)
{
    // loops through each string position
    int input_length = input_value.length();
    for (int string_index = 0; string_index < input_length; string_index++)
    {
        // check if string position is not a digit
        if (isdigit(input_value[string_index]) == 0) return false;
    }

    // if all string positions are digits
    return true;
}
