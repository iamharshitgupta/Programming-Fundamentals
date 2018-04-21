#include<iostream>
using namespace std;
int main() {
// Total number of rows
int n;
cin >> n;
int row = 1;
while(row <= n) {
int col = 1;
while(col <= row) {
if(col == 1 || col == row)
cout << "1";
else
cout << "2";
col++;
}
row++;
cout << endl;
}
}
