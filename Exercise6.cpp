# include <bits/stdc++.h>
# include <vector>
# include <string>

using namespace std;

int main() {

    vector <string> stooges, *stooges_vector {nullptr};
    string ch, exit {'x'};

    do {

        cout << "\nEnter x to exit" << "\n" << endl;

        cout << "Enter a name to add to the list stooges: ";
        getline(cin, ch);

        stooges.push_back(ch);

    } while (ch != exit);

    stooges.pop_back();

    stooges_vector = &stooges;

    cout << "\nThe Stooges are: ";

    for (auto stooge: (*stooges_vector)) {
        cout << stooge << " ";
    }

    cout << "\nThe Number of Stooges are: " << (*stooges_vector).size() << endl;

    return 0;
}