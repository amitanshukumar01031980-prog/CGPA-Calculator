#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> course(n);
    vector<double> grade(n), credit(n);

    double totalCredits = 0;
    double totalGradePoints = 0;

    // Input course details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter course name: ";
        cin >> course[i];

        cout << "Enter grade point: ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    // Calculate GPA
    double GPA = totalGradePoints / totalCredits;

    // Display course details
    cout << "\n----- Course Details -----\n";

    for (int i = 0; i < n; i++) {
        cout << course[i]
             << " | Grade: " << grade[i]
             << " | Credits: " << credit[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nSemester GPA: " << GPA;

    // For a single semester, GPA is the current CGPA
    cout << "\nOverall CGPA: " << GPA << endl;

    return 0;
}