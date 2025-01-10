#include <iostream>
#include <vector>
using namespace std;

// Function to rotate and slide a window over user-defined data
void rotateSlidingWindow(const vector<int>& data, int windowSize) {
    if (windowSize > data.size() || windowSize <= 0) {
        cerr << "Invalid window size!" << endl;
        return;
    }

    vector<int> window(data.begin(), data.begin() + windowSize);

    // Print the initial window
    cout << "Initial window: ";
    for (int num : window) {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the sliding window
    for (size_t i = windowSize; i < data.size() + windowSize; ++i) {
        // Remove the first element and add the next element
        window.erase(window.begin());
        window.push_back(data[i % data.size()]);

        // Print the current window
        cout << "Current window: ";
        for (int num : window) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> data;
    int windowSize, n;

    // Input array size and elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Array size must be greater than 0!" << endl;
        return 1;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        data.push_back(element);
    }

    // Input window size
    cout << "Enter the window size: ";
    cin >> windowSize;

    // Call the function
    rotateSlidingWindow(data, windowSize);

    return 0;
}
