#include <iostream>

using namespace std;

int main() {
    const int num_students = 10;
    int marks[num_students][5];
    int total[num_students];
    float average[num_students];
    char grade[num_students];

    // Input marks
    cout << "Please Enter the marks of five subjects for each student:" << endl;
    for(int i = 0; i < num_students; ++i) {
        cout << "Student " << i + 1 << ": ";
        for(int j = 0; j < 5; ++j) {
            cin >> marks[i][j];
        }
    }

    // Calculate total and average, and determine grade
    cout << "Results:" << endl;
    for(int i = 0; i < num_students; ++i) {
        total[i] = 0;
        for(int j = 0; j < 5; ++j) {
            total[i] += marks[i][j];
        }
        average[i] = total[i] / 5.0;

        if(average[i] > 75)
            grade[i] = 'D';
        else if(average[i] >= 60)
            grade[i] = 'F';
        else if(average[i] >= 50)
            grade[i] = 'S';
        else if(average[i] >= 40)
            grade[i] = 'T';
        else
            grade[i] = 'F';
        
        // Display results
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Total Marks\t= " << total[i] << endl;
        cout << "Average Marks\t= " << average[i] << endl;
        
        switch(grade[i]) {
            case 'D':
                cout << "Grade: Distinction" << endl;
                break;
            case 'F':
                cout << "Grade: First Division" << endl;
                break;
            case 'S':
                cout << "Grade: Second Division" << endl;
                break;
            case 'T':
                cout << "Grade: Third Division" << endl;
                break;
            default:
                cout << "Grade: Fail" << endl;
        }
        cout << endl;
    }

    return 0;
}

