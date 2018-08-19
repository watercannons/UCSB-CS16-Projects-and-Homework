//This program prompts the user to enter multiple assignment grades, and gets an overall grade percentage
//(It's your joe average student grade calculator program)

#include <iostream>
#include <string>
using namespace std;

struct student
{
    double labParticipation;

    double hw1;
    double hw2;
    double hw3;
    double hw4;
    double hw5;
    double hw6;

    double midterms;
    double finals;
};

int main()
{
    void studentData(student *y);
    double computedGrade(student x);

    student studentRecord;
    studentData(&studentRecord);
    cout << computedGrade(studentRecord) << "%";
}

void studentData(student *scores)
{
    //student scores;


    cout << "Enter Lab Participation Grade" << endl;
    cin >> (*scores).labParticipation;


    cout << "Enter HW #1 Grades" << endl;
    cin >> (*scores).hw1;
    cout << "Enter HW #2 Grades" << endl;
    cin >> (*scores).hw2;
    cout << "Enter HW #3 Grades" << endl;
    cin >> (*scores).hw3;
    cout << "Enter HW #4 Grades" << endl;
    cin >> (*scores).hw4;
    cout << "Enter HW #5 Grades" << endl;
    cin >> (*scores).hw5;
    cout << "Enter HW #6 Grades" << endl;
    cin >> (*scores).hw6;

    cout << "Enter Midterm Grades" << endl;
    cin >> (*scores).midterms;
    cout << "Enter Finals Grades" << endl;
    cin >> (*scores).finals;

}

double computedGrade(student s)
{
    double hwSum = (s.hw1 + s.hw2 + s.hw3 + s.hw4 + s.hw5 + s.hw6) * 0.2 / 6;
    double labSum = s.labParticipation * 0.05;
    double testSum = (s.midterms + s.finals) / 2 * 0.75;

    return hwSum + labSum + testSum;
}