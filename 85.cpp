#include <iostream>
#include <algorithm>

using namespace std;

// Structure to represent a workshop
struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

// Structure to represent available workshops
struct Available_Workshops {
    int n;
    Workshop* workshops;
};

// Function to initialize available workshops
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops;
    ptr->n = n;
    ptr->workshops = new Workshop[n];
    for (int i = 0; i < n; ++i) {
        ptr->workshops[i].start_time = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].end_time = start_time[i] + duration[i];
    }
    return ptr;
}

// Function to calculate maximum number of workshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->workshops, ptr->workshops + ptr->n, [](Workshop& a, Workshop& b) {
        return a.end_time < b.end_time;
    });

    int end_time = 0;
    int count = 0;
    for (int i = 0; i < ptr->n; ++i) {
        if (ptr->workshops[i].start_time >= end_time) {
            ++count;
            end_time = ptr->workshops[i].end_time;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of workshops: ";
    cin >> n;

    int* start_time = new int[n];
    int* duration = new int[n];

    cout << "Enter the start times of workshops: ";
    for (int i = 0; i < n; ++i) {
        cin >> start_time[i];
    }

    cout << "Enter the durations of workshops: ";
    for (int i = 0; i < n; ++i) {
        cin >> duration[i];
    }

    Available_Workshops* workshops = initialize(start_time, duration, n);
    int max_workshops = CalculateMaxWorkshops(workshops);
    cout << "Maximum number of workshops that can be attended: " << max_workshops << endl;

    delete[] start_time;
    delete[] duration;
    delete[] workshops->workshops;
    delete workshops;

    return 0;
}

