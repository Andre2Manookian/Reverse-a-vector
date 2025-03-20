#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Write a program that reads N integers into a vector<int>, then reverses and prints the elements.


int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    reverse(nums.begin(), nums.end());

    cout << "Reversed vector: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
