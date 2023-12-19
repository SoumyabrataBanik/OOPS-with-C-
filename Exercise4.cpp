# include <bits/stdc++.h>
# include <vector>
using namespace std;

void printNumbers(vector <int> &array) {
    if (array.size() == 0) {
        cout << "List is empty! Unable to print list!\n" << endl;
    }
    else {
        cout << "[ ";
        for (int index=0; index < array.size(); index++) {
            cout << array.at(index) << " ";
        }
        cout << "]\n" << endl;
    }
}

void addNumber(vector <int> &array) {
    int number;
    cout << "Enter a number to add to the list: ";
    cin >> number;
    cout << endl;
    array.push_back(number);
}

void displayMean(vector <int> &array) {
    double sum = 0, mean;

    if (array.size() == 0) {
        cout << "List is Empty! Unable to find Mean!\n" << endl;
    }

    for (int index = 0; index < array.size(); index++) {
        sum += array.at(index);
    }

    mean = sum/array.size();

    cout << "The mean is = " << mean << "\n" << endl;
}

void smallestNumber(vector <int> &array) {
    int minIndex = 0;
    double temp = array.at(0);
    for (int element : array) {
        if (element < temp) {
            temp = element;
        }
    }

    cout << "The Smallest Number in the list is " << temp << "\n" << endl;
}

void largestNumber(vector <int> &array) {
    int maxIndex = 0;
    double temp = array.at(maxIndex);
    for (int index = 0; index < array.size(); index++) {
        if (array.at(index) > temp) {
            temp = array.at(index);
        }
    }

    cout << "The Largest Number in the list is " << temp << "\n" << endl;
}

int main() {

    char choice, ch;
    vector <int> list;

    do {

        cout << "***** MENU *****" << endl;
        cout << "P - Print Numbers \nA - Add a Number \nM - Display Mean of the Numbers \nS - Display the Smallest Number \nL - Display the Largest Number \nQ - Quit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        
        ch = tolower(choice);

        switch (ch) {

            case 'p':
                printNumbers(list);
                break;
            
            case 'a':
                addNumber(list);
                break;
            
            case 'm':
                displayMean(list);
                break;
            
            case 's':
                smallestNumber(list);
                break;
            
            case 'l':
                largestNumber(list);
                break;
            
            case 'q':
                cout << "Exiting the Program! Goodbye!\n" << endl; 
                break;
            
            default:
                cout << "Unknown Selection! Please try again!\n" << endl;
        }

    } while (ch != 'q');

    return 0;
}