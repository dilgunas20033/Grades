//
//  main.cpp
//  Student grades
//
//  Created by Deividas Ilgunas on 3/29/23.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int numStudents, count1=0, count2=0;
    float grades;
    
    outputFile.open("Studentgrades.txt");
    cout << "How many students are there?" << endl << endl;
    cin >> numStudents;
    
    for (count1=1; count1<=numStudents; count1++)
    {
        for (count2=1; count2<=3; count2++)
        {
            cout << "What is Student " << count1 << " grade for Math?" << endl << endl;
            cin >> grades;
            outputFile << grades;
        }
        
    }
    
}
