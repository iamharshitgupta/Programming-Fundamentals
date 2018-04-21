#include<iostream>
using namespace std;
int main() {
// Total number of rows
int n;
cin >> n;
int row = n;
while(row >= 1) {
int col = 1, val = 1;
while(col <= row) {
cout << val;
val++;
col++;
}
row--;
cout << endl;
}
}
