#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    for(int i = 0; i < grades.size(); i++) {
        if(grades[i] >= 38) {
            if(((grades[i] + 2) / 5) > (grades[i] / 5)) {
                grades[i] = (5* ((grades[i] + 2) / 5));
            }
        }
    }
    return grades;
}

int main() {

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(grades_count_temp);

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(grades_item_temp);

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}
