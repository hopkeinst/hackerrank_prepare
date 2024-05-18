#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    int max = INT16_MIN;
    for(int i=0; i<candles.size(); i++) {
        if(candles[i] > max) {
            max = candles[i];
        }
    }
    int cnt_max = 0;
    for(int i=0; i<candles.size(); i++) {
        if(candles[i] == max) {
            cnt_max += 1;
        }
    }
    return cnt_max;
}

int main() {
    
    int n;
    cin >> n;
    cin.ignore();
    
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
    
    istringstream iss(arr_temp_temp);

    vector<int> candles(n);
    
    for (int i = 0; i < n; ++i) {
        iss >> candles[i];
    }

    int result = birthdayCakeCandles(candles);

    cout << result << "\n";

    return 0;
}
