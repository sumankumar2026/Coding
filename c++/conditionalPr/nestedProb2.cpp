/*Write a C++ program that prompts the user to enter the details of a student: their grade level (9, 10, 11, or 12), their GPA (a float between 0.0 and 4.0), and the number of extracurricular activities they participate in. The program should evaluate the student's eligibility for a scholarship based on the following criteria:

Grade Level:
Only students in grade 11 or 12 are eligible for the scholarship.
GPA Requirement:
For grade 11: Minimum GPA of 3.5
For grade 12: Minimum GPA of 3.3
Extracurricular Activities:
Students must be involved in at least 2 extracurricular activities to be eligible.
The program should output whether the student is eligible for the scholarship and, if not, provide the reason(s) for ineligibility.

Example:
If the user enters 11, 3.6, and 3, the program should output: "You are eligible for the scholarship."
If the user enters 10, 3.8, and 4, the program should output: "You are not eligible for the scholarship because only students in grade 11 or 12 are eligible."
If the user enters 12, 3.1, and 2, the program should output: "You are not eligible for the scholarship because your GPA is below the required minimum for grade 12."*/

#include <iostream>
using namespace std;
int main()
{
    int Grade;
    float GPA;
    int ExtracurricularActivities;
    cout << "Enter a Grade(9-12): ";
    cin >> Grade;
    if (Grade >= 11 || Grade <= 12)
    {
        cout << "Enter GPA: ";
        cin >> GPA;

        cout << "Enter ExtracurricularActivities: ";
        cin >> ExtracurricularActivities;

        if (Grade == 11)
        {
            if (GPA >= 3.5 && ExtracurricularActivities >= 2)
            {
                cout << "You are eligible for the scholarship.";
            }
            else
            {
                cout << "sorry you are not eligible for the scholarship..";
            }
        }

        else if (Grade == 12)
        {
            if (GPA >= 3.3 && ExtracurricularActivities >= 2)
            {
                cout << "You are eligible for the scholarship";
            }
            else
            {
                cout << "sorry you are not eligible for the scholarship..";
            }
        }
        
    }
}