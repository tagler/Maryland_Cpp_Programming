// C++ Programming Assessment #1

// Extras:
// - User input validation (must be number between 0 and 10)
// - Display high/low scores to 1 decimal place
// - Display average score to 2 decimal places

#include <iostream>
#include <cstdio>
using namespace std;

// function prototypes
void input_judge_scores(double scores[], const int total_judges);
double find_highest_score(double scores[], const int total_judges);
double find_lowest_score(double scores[], const int total_judges);
double sum_of_scores(double scores[], const int total_judges);

// main program ===============================================================
int main()
{
    // define number of judges (size of score array)
    const int total_judges = 6;

    // define array to hold scores for each judge
    double scores[total_judges];

    // define varialbes to hold highest, lowest, sum, and average scores
    double highest_score, lowest_score, sum_scores, event_score;

    // call function to input judge scores
    input_judge_scores(scores, total_judges);

    // call function to return max score
    highest_score = find_highest_score(scores, total_judges);

    // call function to return min score
    lowest_score = find_lowest_score(scores, total_judges);

    // call function to calculate score sum
    sum_scores = sum_of_scores(scores, total_judges);

    // find average of scores
    event_score = (sum_scores-highest_score-lowest_score) / (total_judges-2);

    // display scores to user
    cout << "The gymnast's scores are";
    for (int index=0; index < total_judges; index++)
    {
        // print comma between scores
        if (index < total_judges-1)
        {
            printf(" %.1f,", scores[index]);
        }
        // do not print comma after last score
        else
        {
            printf(" %.1f", scores[index]);
        }
    }

    // display highest and lowest scores
    printf("\nThe high score is %.1f", highest_score);
    printf("\nThe low score is %.1f", lowest_score);

    // temp
    printf("\nThe score for this event is %.2f\n", event_score);

    // end
    return 0;
}

// functions =================================================================

// function that asks to input judge scores
void input_judge_scores(double scores[], const int total_judges)
{
    double user_input;
    // loop to ask user for score of each judge
    for (int judge_number=1; judge_number <= total_judges; judge_number++)
    {
        cout << "Please input the score from judge #" << judge_number << ": ";
        cin >> user_input;
        // validate user's input and confirm number from 0 to 10.0
        while ( cin.fail() || (user_input > 10.0) || (user_input < 0.0) )
        {
            // ask user again for input
            cout << "ERROR! Please re-enter score between 0.0 and 10.0: ";
            cin.clear();
            cin.ignore(256,'\n');
            cin >> user_input;
        }
        // stores validated input in score array
        scores[judge_number-1] = user_input;
    }
}

// function that returns highest value in score array
double find_highest_score(double scores[], const int total_judges)
{
    // start with first score as highlest
    double highest_score = scores[0];
    // loop through array to find max score
    for (int index=1; index < total_judges; index++)
    {
        // replace highest score
        if (scores[index] > highest_score)
        {
            highest_score = scores[index];
        }
    }
    // return highest score to main
    return highest_score;
}

// function that returns lowest value in score array
double find_lowest_score(double scores[], const int total_judges)
{
    // start with first score as lowest
    double lowest_score = scores[0];
    // loop through array to find lowest score
    for (int index=1; index < total_judges; index++)
    {
        // replace lowest score
        if (scores[index] < lowest_score)
        {
            lowest_score = scores[index];
        }
    }
    // return lowest score to main
    return lowest_score;
}

// function to calculate sum
double sum_of_scores(double scores[], const int total_judges)
{
    // start with 0 sum
    double sum_scores = 0;
    // loop through score array to add up values
    for (int index=0; index < total_judges; index++)
    {
        sum_scores += scores[index];
    }
    // return sum to main
    return sum_scores;
}
