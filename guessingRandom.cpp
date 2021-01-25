// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program asks the user to guess a random number


#include <iostream>
#include <random>


int main() {
    // this function asks the user to guess a random number

    int randomNumber;
    int guess;

    // generate random number
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 10);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter guess: ";
    std::cin >> guess;

    // process + output
    if (guess == randomNumber) {
        std::cout << "Correct!";
    } else {
        std::cout << "The correct answer was "<< randomNumber << std::endl;
    }
}
