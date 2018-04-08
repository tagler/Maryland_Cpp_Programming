// C++ Programming Assessment #2 v1

#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

// main program ==============================================================
int main()
{
    // define user input variables
    string input_name;
    int input_midterm, input_final, input_homework_grade;

    // ask user for input
    cout << endl << "Please input the student name: ";
    cin >> input_name;
    cout << "Please input " << input_name << "'s midterm grade: ";
    cin >> input_midterm;
    cout << "Please input " << input_name << "'s final exam grade: ";
    cin >> input_final;

    // create Student object with user inputs
    Student student_object(input_name, input_midterm, input_final);

    // ask user for homework grades
    cout << "Please input " << input_name << "'s homework grades (-1 to end)\n";
    while (true)
    {
        cin >> input_homework_grade;
        // append each input homework grade
        if (input_homework_grade != -1)
        {
            student_object.addHomeworkGrade(input_homework_grade);
        }
        // exit loop (-1 to end)
        else
        {
            break;
        }
    }

    // print student objet information
    student_object.printStudentInformation();

    return 0;
}
