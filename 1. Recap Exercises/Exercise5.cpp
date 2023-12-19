# include <iostream>
# include <string>

using namespace std;

int main() {

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGXIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secretMessage;
    string encryptedMessage;
    string decryptedMessage;

    cout << "Enter your secret message: ";
    getline(cin, secretMessage);

    for (char character : secretMessage){

        if (character == ' '){
            encryptedMessage += ' '; 
        }

        else if (character == '\'') {
            encryptedMessage += '\'';
        }

        else {
            for (char element : alphabet) {
                if (character == element) {
                    int position = alphabet.find(element);
                    encryptedMessage += key.at(position);
                }
            }
        }
    }

    for (char character : encryptedMessage) {

        if (character == ' '){
            decryptedMessage += ' ';
        }

        else if (character == '\'') {
            decryptedMessage += '\'';
        }

        else {
            for (char element : key) {
                if (character == element) {
                    int position = key.find(character);
                    decryptedMessage += alphabet.at(position);
                }
            }
        }
    }

    cout << "The Encrypted Message is: " << encryptedMessage << "\n" << endl;
    cout << "The Decrypted Message is: " << decryptedMessage << "\n" << endl;



    return 0;
}