#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <rows>\n";
        return 1;  // Return non-zero value to indicate error
    }
    
    int rows = atoi(argv[1]); // Convert the argument (which is a string) to an integer

    // Loop to print the triangle pattern
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space)// Print spaces
            cout << " ";

        for (int j = 1; j <= i; ++j)// Print asterisks
            cout << "* ";
            
        cout << endl; 
    }

    return 0;  // Return zero to indicate successful execution
}
