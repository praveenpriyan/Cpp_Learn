#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

// Function to fill a vector with data
void fillVector(std::vector<int>& vec) {
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
}

// Function to print the contents of a vector
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declare a vector of integers
    std::vector<int> numbers;

    // Fill the vector with data
    fillVector(numbers);

    // Print the contents of the vector
    std::cout << "Elements in the vector: ";
    printVector(numbers);

    // Calculate the sum of elements in the vector
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    // Print the sum of elements
    std::cout << "Sum of elements in the vector: " << sum << std::endl;

    return 0;
}
