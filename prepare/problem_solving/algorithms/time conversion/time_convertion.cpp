#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    size_t pos = s.find(":");
    int hour = stoi(s.substr(0, pos));
    string am_pm = s.substr(s.size()-2);
    if(am_pm == "PM") {
        if(hour < 12) {
            hour += 12;
        }
    } else {
        if(hour == 12) {
            hour = 0;
        }
    }
    if(hour > 23) {
        hour -= 24;
    }
    string hour_str = "  ";
    if(hour < 10) {
        hour_str = "0" + to_string(hour);
    } else {
        hour_str = to_string(hour);
    }
    return hour_str+s.substr(pos, s.size()-2-pos);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
