#include <iostream>

double squareRoot(double num, double epsilon = 1e-6) {
    if (num < 0)
        return -1; // Square root of negative numbers is undefined

    double guess = num / 2; // Initial guess

    while (true) {
        double newGuess = 0.5 * (guess + num / guess); // Update guess using Babylonian method

        if (std::abs(newGuess - guess) < epsilon) // Check if the guess has converged
            return newGuess;

        guess = newGuess; // Update guess for next iteration
    }
}

int main() {
    double number = 25.0; // Number to find the square root of
    double result = squareRoot(number);

    std::cout << "Square root of " << number << " is: " << result << std::endl;

    return 0;
}
