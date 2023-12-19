# include <bits/stdc++.h>
using namespace std;

int calculateTotal(int smallRooms, int largeRooms){
    int total = 25*smallRooms + 35*largeRooms;
    return total;
}

float calculateTax(int totalCharge){
    float tax = (float(totalCharge) * 6) / 100;
    return tax;
}

int main() {

    int smallRooms, largeRooms, total;
    float tax, totalEstimate;

    cout << "Hello! Welcome to Frank's Cleaning Service!" << endl;

    cout << "How many small rooms do you want? ";
    cin >> smallRooms;

    cout << "How many large rooms do you want? ";
    cin >> largeRooms;

    total = calculateTotal(smallRooms, largeRooms);
    tax = calculateTax(total);
    totalEstimate = float(total) + tax;

    cout << "Estimate for Carpet Cleaning Service: " << endl;
    cout << "Number of Small Rooms: " << smallRooms << endl;
    cout << "Number of Large Rooms: " << largeRooms << endl;
    cout << "Price per small room: $25 " << endl;
    cout << "Price per large room: $35 " << endl;
    cout << "Cost: $" << total << endl;
    cout << "Tax: $" << tax << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Total Estimate: $" << totalEstimate << endl;
    cout << "This estimate is valid for only 30 days." << endl;
}