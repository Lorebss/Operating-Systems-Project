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
