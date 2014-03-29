//
//  CS-110 Assignment 4 Question 2
//  Nuo Chen
//  200327119
//  Created by Nuo Chen on 2014-03-15.
//  Introduction: prompt user to first input how many numbers he/she would
//                like to input, then ask user to input these numbers and
//                check if the sequence of numbers were pre-sorted or not
//

#include <iostream>
#include <iomanip>

using namespace std;

//function to determine if array was sorted ascendingly, if it was, return false
//otherwise return true
bool isSorted(const int [], int);

int main()
{
    //declaration and initialization
    //maximum size of input array is 80
    const int maxSize = 80;
    //first digit determine how long the coming input will be
    int inputSize = 0;
    //initial input array
    int array[maxSize] = {-1};
    //default check result
    bool sorted = true;
    
    //prompt user to enter size of list
    cout << "Enter list: ";
    cin >> inputSize;
    //input number to array
    for(int i = 0; i < inputSize; i++){
        cin >> array[i];
    }
    //flush buffer
    cin.sync();
    
    //store check ascending result, in face it was not necessary
    //i can simply use "if(isSorted(array, inputSize)){}else" to
    //control cout
    sorted = isSorted(array, inputSize);
    
    //determine output according sorted value
    if(sorted == false){
        cout << "The list is not sorted." << endl;
    }else if(sorted == true){
        cout << "The list is already sorted." << endl;
    }
    
    return 0;
}

/*
    fucntion for sorted check, because question only asked about
    if it's sorted ascendingly, so i can just check if there is
    any number that is larger then the number right after it, if
    there's not, the array was sorted ascendingly.
 */
bool isSorted(const int array[], int size){
    for(int i = 1; i < size; i++){
        if(array[i-1] > array[i]){
            return false;
        }
    } return true;
}