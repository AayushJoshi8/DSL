
#include <iostream>
using namespace std;
class Temperature {
public:

int temp[3][7];

void input() {
for (int c = 0; c < 3; c++) {
cout << "Enter temperatures for City " << c << " (7 days):\n";
for (int d = 0; d < 7; d++) {
cin >> temp[c][d];
}
}
}


void dailyAvg() {
cout << "Daily Average Temperatures:\n";
cout << " ";
for (int d = 0; d < 7; d++) {
cout << "Day " << d << "\t";
}
cout << "Avg: ";
for (int d = 0; d < 7; d++) {
float sum = 0;
for (int c = 0; c < 3; c++) {
sum += temp[c][d];
}
float avg = sum / 3;
cout << avg << "\t";
}
cout << endl;
}

void weeklyAvg() {
cout << "Weekly Average Temperatures by City:\n";
cout << "Cities: ";
for (int c = 0; c < 3; c++) {
cout << "City " << c << " ";
}
cout << "Average:";
for (int c = 0; c < 3; c++) {
float sum = 0;
for (int d = 0; d < 7; d++) {
sum += temp[c][d];
}
float avg = sum / 7;
cout << " " << avg << " ";
}
cout << endl;
}
};

int main() {

Temperature t;
t.input();
t.dailyAvg();
t.weeklyAvg();

return 0;
}
