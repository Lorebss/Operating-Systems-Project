#include <iostream>
#include <fstream>
#include <dirent.h>
#include <sys/stat.h>
#include <string>
#include <vector>

using namespace std;

// Function to display a menu
void displayMenu() {
  cout << "\nFile Management Utility\n";
  cout << "1. List Files\n";
  cout << "2. Read File\n";
  cout << "3. Create File\n"; // Add create file functionality
  cout << "0. Exit\n";
  cout << "Enter your choice: ";
}

// Function to list files in the current directory (corrected)
void listFiles() {
  DIR *dir = opendir(".");
  if (dir == NULL) {
    cerr << "Error opening directory.\n";
    return; // Exit the function if directory cannot be opened
  }

  // Rest of the code for listing files...

  closedir(dir);
}
 if (filenames.empty()) {
    cout << "No files found.\n";
  } else {
    cout << "Files:\n";
    for (const string& filename : filenames) {
      cout << filename << endl;
    }
  }
}

void readFile() {
  string filename;
  cout << "Enter filename to read: ";
  cin >> filename;

  // Check if filename is empty
  if (filename.empty()) {
    cerr << "Error: Please enter a filename.\n";
    return;
  }

  ifstream file(filename);
  if (file.is_open()) {
    cout << "Reading file: " << filename << endl;
    string line;
    int lineNumber = 1; // Track line number for better error reporting

    // Read and display file contents line by line
    while (getline(file, line)) {
      cout << lineNumber << ". " << line << endl;
      lineNumber++;
    }

    file.close();
    cout << "File read successfully.\n";
  } else {
    cerr << "Error opening file: " << filename << endl;
  }
}
// Function to create a new file (basic implementation)
void createFile() {
  int filename;
  cout << "Enter filename for new file: ";
  cin >> filename;

