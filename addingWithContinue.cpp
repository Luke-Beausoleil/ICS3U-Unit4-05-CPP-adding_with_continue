// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program adds inputted numbers using a continue statement

#include <iostream>
#include <string>

int main() {
    // this function adds the numbers

    // variables
    int loopCounter = 0;
    float sumOfNumbers = 0;
    std::string timesToAddAsString;
    int timesToAdd;
    std::string userInput;
    float number;

    // input
    std::cout << "How many numbers do you want to add? ";
    std::cin >> timesToAddAsString;

    // process
    try {
        timesToAdd = std::stoi(timesToAddAsString);
        if (timesToAdd > 0) {
            while (loopCounter < timesToAdd) {
                std::cout << "Enter a number you wish to add: ";
                std::cin >> userInput;
                try {
                    number = std::stof(userInput);
                    loopCounter += 1;
                    if (number < 0) {
                        continue;
                        }
                    sumOfNumbers += number;
                } catch (std::invalid_argument) {
                        continue;
                }
            }
        std::cout << "\nThe sum of the positive numbers is " <<
              sumOfNumbers << std::endl;
        } else if (timesToAdd < 0) {
            std::cout << "\nUnable to add that many numbers" << std::endl;
        } else {
            std::cout << "\nThe sum of zero numbers is 0" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nUnable to add that many numbers" << std::endl;
    }
    std::cout << "Done.";
}
