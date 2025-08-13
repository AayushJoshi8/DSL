#include <iostream>
using namespace std;

class Rainfall {
public:
    float rain[3][4]; 

    void input() {
        for (int c = 0; c < 3; c++) {
            cout << "Enter rainfall data (4 months):\n";
            for (int m = 0; m < 4; m++) {
                cin >> rain[c][m];
            }
        }
    }

    void monthlyAvg() {
        for (int m = 0; m < 4; m++) {
            float sum = 0;
            for (int c = 0; c < 3; c++) {
                sum += rain[c][m];
            }
            float avg = sum / 3; 
        }
    }

    void cityAvg() {
        for (int c = 0; c < 3; c++) {
            float sum = 0;
            for (int m = 0; m < 4; m++) {
                sum += rain[c][m];
            }
            cout << sum << " " << sum / 4 << endl;
        }
    }
};

int main() {
    Rainfall r;
    r.input();
    r.monthlyAvg();  
    r.cityAvg();     
    return 0;
}

