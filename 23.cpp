#include <iostream>
#include <string>
using namespace std;

class SeriesSum {
private:
    string series;
    int sum;

public:
    // Constructor to initialize the series and calculate the sum
    SeriesSum(string s) {
        series = s;
        sum = 0;
        calculateSum();
    }

    // Function to calculate the sum of the series
    void calculateSum() {
        int current = 0;
        for (int i = 0; i < series.length(); ++i) {
            char c = series[i];
            if (isdigit(c)) {
                current = current * 10 + (c - '0');
            } else if (c == '+') {
                sum += current;
                current = 0;
            }
        }
        // Adding the last number
        sum += current;
    }

    // Function to display the sum
    void displaySum() {
        cout << "Sum of the series: " << sum << endl;
    }
};

int main() {
    string input;
    cout << "Enter the series: ";
    getline(cin, input);

    // Creating an object of SeriesSum class with the input series
    SeriesSum seriesSum(input);

    // Displaying the sum of the series
    seriesSum.displaySum();

    return 0;
}

