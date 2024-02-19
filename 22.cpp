#include <iostream>
#include <string>
using namespace std;

class State {
protected:
    int tp;

public:
    State() {
        tp = 0;
    }

    void inctp() {
        tp++;
    }

    int gettp() {
        return tp;
    }
};

class District : public State {
private:
    string Dname;
    float Distance;
    long Population;

public:
    void DINPUT() {
        cout << "Enter district name: ";
        cin >> Dname;
        cout << "Enter distance: ";
        cin >> Distance;
        cout << "Enter population: ";
        cin >> Population;
    }

    void DOUTPUT() {
        cout << "\nDistrict Name: " << Dname << endl;
        cout << "Distance: " << Distance << endl;
        cout << "Population: " << Population << endl;
    }
};

int main() {
    District district;
    district.DINPUT();
    district.DOUTPUT();
    return 0;
}

