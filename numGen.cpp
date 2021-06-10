// Copyright (c) 2021 Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 10, 2021
// This program generates 10 random number into an array/list between 0 and 100
// and displays the average

#include <iostream>
#include <random>

int main() {
    // declare constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // declare variables
    int numberArray[10], number, sum, counter;
    float average;

    for (counter = MIN_NUM; counter < MAX_ARRAY_SIZE; counter++) {
        // generate random number from 0 to 100 and add it to the array
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);
        number = idist(rgen);

        numberArray[counter] = number;

        // display the random number added and at which position/index
        std::cout << number << " added to the list at position " << counter;
        std::cout << ".\n";
    }
    std::cout << "\n";

    for (counter = MIN_NUM; counter < MAX_ARRAY_SIZE; counter++) {
        // calculate the sum of the numbers in the array
        if (counter == 0) {
            sum = numberArray[counter];
        } else {
            sum = sum + numberArray[counter];
        }
    }

    // calculate and display the average of the numbers in the array
    average = static_cast<float>(sum)/static_cast<float>(MAX_ARRAY_SIZE);
    std::cout << "The average is: " << average;
}
