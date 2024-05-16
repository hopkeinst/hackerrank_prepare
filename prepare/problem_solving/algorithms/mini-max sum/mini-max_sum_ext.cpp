#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    unsigned long min = INT64_MAX;
    unsigned long max = 1;
    cout << endl << "Min: " << min << endl << "Max: " << max << endl;
    for(int i=0; i<arr.size(); i++) {
        unsigned long sum = 0;
        cout << "Excluye " << i << " -> " << arr[i] << endl;
        for(int j=0; j<arr.size(); j++) {
            if(i!=j) {
                sum+=arr[j];
                cout << "  " << arr[j];
            }
        }
        cout << endl << "  Suma: " << sum << endl;
        if(sum>max) {
            cout << "    Suma mayor al máximo" << endl;
            cout << "    " << sum << " > " << max << endl;
            max=sum;
            cout << "    New max: " << max << endl;
        }
        if(sum<min) {
            cout << "    Suma menor al máximo" << endl;
            cout << "    " << sum << " < " << min << endl;
            min=sum;
            cout << "    New min: " << min << endl;
        }
    }
    cout << min << " " << max << endl;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    istringstream iss(arr_temp_temp);

    vector<int> arr(5);
    
    for (int i = 0; i < 5; ++i) {
        iss >> arr[i];
    }

    // Imprimir los números para verificar
    cout << "Los números leídos son: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    miniMaxSum(arr);

    return 0;
}
