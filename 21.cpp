#include <iostream>
#include <string>
using namespace std;

class Ele_Bill {
private:
    char Cname[50];
    long Pnumber;
    int No_of_units;
    float Amount;

public:
    // Function to calculate the amount based on the number of units
    void Calc_Amount() {
        if (No_of_units <= 50)
            Amount = 0;
        else if (No_of_units <= 150)
            Amount = (No_of_units - 50) * 0.80;
        else if (No_of_units <= 350)
            Amount = 100 * 0.80 + (No_of_units - 150) * 1.00;
        else
            Amount = 100 * 0.80 + 200 * 1.00 + (No_of_units - 350) * 1.20;
    }

    // Function to accept input from user and calculate amount
    void Accept() {
        cout << "Enter customer name: ";
        cin.getline(Cname, 50);
        cout << "Enter phone number: ";
        cin >> Pnumber;
        cout << "Enter number of units consumed: ";
        cin >> No_of_units;
        cin.ignore(); // Ignore newline character left in buffer
        Calc_Amount(); // Calculate amount
    }

    // Function to display bill details
    void Display() {
        cout << "Customer Name: " << Cname << endl;
        cout << "Phone Number: " << Pnumber << endl;
        cout << "Number of units consumed: " << No_of_units << endl;
        cout << "Amount: $" << Amount << endl;
    }
};

int main() {
    Ele_Bill bill;
    bill.Accept(); // Accept input from user
    cout << "\n--- Bill Details ---" << endl;
    bill.Display(); // Display bill details
    return 0;
}

