#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int countWords(const string &text) {
    stringstream ss(text);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Error opening file: " << fileName << endl;
        return 1;
    }
    stringstream buffer;
    buffer << inputFile.rdbuf();
    string fileContent = buffer.str();

    inputFile.close();
    int wordCount = countWords(fileContent);
    cout << "Total number of words in the file: " << wordCount << endl;

    return 0;
}
