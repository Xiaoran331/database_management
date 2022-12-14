/*
Skeleton code for linear hash indexing
*/

#include <string>
#include <ios>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "classes.h"
using namespace std;


int main(int argc, char* const argv[]) {

    // Create the index
    LinearHashIndex emp_index("EmployeeIndex");
    emp_index.createFromFile("Employee.csv");
    
    // Loop to lookup IDs until user is ready to quit
    cout << "if want to exist, please enter q" << endl;
    cout << "key in ID then search data info...." << endl;
    string ID;
    getline(cin, ID);
    while(ID != "q"){
        emp_index.findRecordById(stoi(ID)).print();
        cout << "if want to exist, please enter q" << endl;
        cout << "key in ID then search data info...." << endl;
        getline(cin, ID);
    }
    return 0;
}