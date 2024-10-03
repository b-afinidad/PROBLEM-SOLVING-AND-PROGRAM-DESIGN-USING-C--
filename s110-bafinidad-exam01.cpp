//s110-bafinidad-exam01
//bryan afinidad
// read data from file
// ignore if not divisible by 3 or 5
// ignore if negative
// extract tens place value digit
// output average of extracted digits

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int data;
    int counter = 0;
    int accum = 0;
    double average;
    
    fstream inFile("/temp/numbers.txt");
    if(!inFile){cout << "FILE NOT FOUND" << endl;}
    while(inFile >> data){
        if(data > 0 || data % 3 == 0 || data % 5 == 0){
            counter++;
            accum += data;
            cout << (data % 100) - (data % 10) << endl;
        }
    }
    average = accum / counter;
    if(counter > 0){
        cout << "\nThe average of the valid extracted numbers is: " << average << endl;
    } else {
        cout << "\nNO VALID DATA WAS FOUND"
    }
    cout << "\nTHANK YOU!" << endl;
    return 0;
}