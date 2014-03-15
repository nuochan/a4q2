//
//  main.cpp
//  a4q2
//
//  Created by Chris Chen on 2014-03-15.
//  Copyright (c) 2014 Nuo Chen. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

bool isSorted(const int [], int);

int main()
{
    const int maxSize = 80;
    int inputSize = 0;
    int array[maxSize] = {-1};
    bool sorted = true;
    
    cout << "Enter list: ";
    cin >> inputSize;
    for(int i = 0; i < inputSize; i++){
        cin >> array[i];
    }
    cin.sync();
    
/*
    for(int i = 1; i < inputSize; i++){
            if(array[i-1] > array[i]){
                sorted = false;
                break;
            }
        }
*/
    
    sorted = isSorted(array, inputSize);
    
    if(sorted == false){
        cout << "The list is not sorted." << endl;
    }else if(sorted == true){
        cout << "The list is already sorted." << endl;
    }
    
    return 0;
}

bool isSorted(const int array[], int size){
    for(int i = 1; i < size; i++){
        if(array[i-1] > array[i]){
            return false;
        }
    } return true;
}