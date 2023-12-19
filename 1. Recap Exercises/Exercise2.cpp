# include <iostream>
# include <vector>
using namespace std;

int main() {

    vector <int> vector1, vector2;
    vector <vector <int>> vector_2d;
    int index;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The elements of Vector 1 is: " << endl;
    for (index=0; index<vector1.size(); index++) {
        cout << vector1.at(index) << "\t";
    }
    cout << endl;
    cout << "Size of Vector 1 = " << vector1.size();
    cout << "\n" << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "The elements of vector 2 are: " << endl;
    for (index = 0; index < vector2.size(); index++){
        cout << vector2.at(index) << "\t";
    }
    cout << endl;
    cout << "Size of Vector 2 = " << vector2.size();
    cout << "\n" << endl;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements of 2d Vector are: " << endl;
    for (index=0; index < vector_2d.size(); index++) {
        for (int ind = 0; ind < vector_2d.at(index).size(); ind++) {
            cout << vector_2d.at(index).at(ind) << '\t';
        }
        cout << endl;
    }
    cout << "Size of 2d Vector = " << vector_2d.size();

    vector1.at(0) = 1000;

    cout << "The new Vector 1 is: " << endl;
    for (index=0; index<vector1.size(); index++) {
        cout << vector1.at(index) << "\t";
    }
    cout << endl;

    cout << "Elements of 2d Vector are: " << endl;
    for (index=0; index < vector_2d.size(); index++) {
        for (int ind = 0; ind < vector_2d.at(index).size(); ind++) {
            cout << vector_2d.at(index).at(ind) << '\t';
        }
        cout << endl;
    }


    return 0;
}