// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: November 28, 2023
// This program calculates the area of a triangle

#include <iostream>

void calc_area_triangle(float base, float height) {
    // calculate the area
    float area = (base * height) / 2;

    // display the area
    std ::cout << "The area is " << area << " cm^2" << std::endl;
}

int main() {
    // declare variables
    std::string baseFromUserStr, heightFromUserStr;
    float baseFromUserFloat, heightFromUserFloat;

    // get the base and height
    std ::cout << "Area of a Triangle" << std::endl;
    std::cout << "Enter the base (cm): ";
    std::cin >> baseFromUserStr;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightFromUserStr;

    try {
        // convert base to a float
        baseFromUserFloat = std::stof(baseFromUserStr);
    } catch (std::invalid_argument) {
        // if base is ! a number, then tell them to enter a number
        std ::cout << baseFromUserStr << " is not a valid number. \n";
    }

    try {
        // convert height to a float
        heightFromUserFloat = std::stof(heightFromUserStr);

        // if the height or base <= 0, tell them to enter positive num
        if (heightFromUserFloat <= 0 || baseFromUserFloat <= 0) {
            std::cout << "Please enter a positive number for both values."
            << std::endl;
        } else {
            // call the calc_area_triangle() function
            calc_area_triangle(baseFromUserFloat, heightFromUserFloat);
        }
    } catch (std::invalid_argument) {
        // if height is ! a number, then tell them to enter a number
        std ::cout << heightFromUserStr << " is not a valid number. \n";
    }
}
