// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program converts grade levels into percentages

#include <iostream>
#include <string>


int GradeLevel(std::string(grade)) {
    // This function converts grade levels into percentages
    int gradePercent;

    // process
    if (grade == "4+") {
        gradePercent = 97;
        return gradePercent;
    } else if (grade == "4") {
        gradePercent = 90;
        return gradePercent;
    } else if (grade == "4-") {
        gradePercent = 83;
        return gradePercent;
    } else if (grade == "3+") {
        gradePercent = 78;
        return gradePercent;
    } else if (grade == "3") {
        gradePercent = 75;
        return gradePercent;
    } else if (grade == "3-") {
        gradePercent = 71;
        return gradePercent;
    } else if (grade == "2+") {
        gradePercent = 68;
        return gradePercent;
    } else if (grade == "2") {
        gradePercent = 65;
        return gradePercent;
    } else if (grade == "2-") {
        gradePercent = 61;
        return gradePercent;
    } else if (grade == "1+") {
        gradePercent = 58;
        return gradePercent;
    } else if (grade == "1") {
        gradePercent = 55;
        return gradePercent;
    } else if (grade == "1-") {
        gradePercent = 51;
        return gradePercent;
    } else if (grade == "R") {
        gradePercent = 25;
        return gradePercent;
    } else {
        gradePercent = -1;
        return gradePercent;
    }
}


int main() {
    // this function gets user input
    std::cout << "This program converts grade levels into percentages."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string gradeInput;
    int gradePercentage;

    // input
    std::cout << "Enter a grade level (e.g: 4+): ";
    std::cin >> gradeInput;
    std::cout << "" << std::endl;

    // call functions
    gradePercentage = GradeLevel(gradeInput);

    // output
    if (gradePercentage == -1) {
        std::cout << "'" << gradeInput << "' is not a valid level, "
                  << "please try again!" << std::endl;
    } else {
        std::cout << "A level " << gradeInput << " is equivalent to "
                  << "an average of " << gradePercentage << "%." <<std::endl;
    }
}
