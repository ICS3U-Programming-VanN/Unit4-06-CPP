// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: November 21, 2022
// Displays all the valid RBG values

#include <iostream>

int main() {
    // Iterates through all red values
    for (int red = 0; red <= 255; red++) {
        // Iterates through all green values
        for (int green = 0; green <= 255; green++) {
            // Iterates through all blue values
            for (int blue = 0; blue <= 255; blue++) {
                // Displays all valid RGB values
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)",
                red, green, blue, red, green, blue);

                // Does a carriage return
                std::cout << "" << std::endl;
            }
        }
    }
}
