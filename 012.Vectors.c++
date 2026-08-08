/*
================================================================================
                       C++ VECTORS: ALL-IN-ONE CHEATSHEET
================================================================================
1. Dynamic Array provided by C++ STL (<vector>).
2. Elements stored in contiguous memory.
3. Automatically resizes when elements are added or removed.
4. $O(1)$ direct access via indexing.
================================================================================
*/

#include <iostream>
#include <vector>
#include <algorithm> // For std::sort, std::find

using namespace std;

// =============================================================================
// 1. CREATION AND INITIALIZATION METHODS
// =============================================================================
void demonstrateInitialization() {
    // 1. Uninitialized vector (empty, size = 0)
    vector<int> vec1;

    // 2. Vector with initial size of 5 (elements initialized to default 0)
    vector<int> vec2(5);

    // 3. Vector with size 5, all elements initialized to 10
    vector<int> vec3(5, 10);

    // 4. Initializer list (C++11+)
    vector<int> vec4 = {10, 20, 30, 40, 50};

    // 5. Copy initialization from another vector
    vector<int> vec5(vec4);

    // 6. Range-based initialization from array or another vector
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec6(arr, arr + 5);
}

// =============================================================================
// 2. ELEMENT ACCESS FUNCTIONS
// =============================================================================
void demonstrateElementAccess() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // 1. [] operator - Direct access without bounds check - O(1)
    int firstVal = numbers[0];

    // 2. at(index) - Access with bounds check (safe, throws out_of_range) - O(1)
    int secondVal = numbers.at(1);

    // 3. front() - First element - O(1)
    int frontVal = numbers.front();

    // 4. back() - Last element - O(1)
    int backVal = numbers.back();

    // 5. data() - Pointer to underlying array buffer - O(1)
    int* ptr = numbers.data();

    cout << "First: " << frontVal << " | Last: " << backVal << "\n";
}

// =============================================================================
// 3. MODIFIER FUNCTIONS
// =============================================================================
void demonstrateModifiers() {
    vector<int> vec;

    // 1. push_back(val) - Insert element at the end - O(1) amortized
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 2. pop_back() - Remove last element - O(1)
    vec.pop_back(); // Removes 30

    // 3. emplace_back(args) - Direct in-place construction - O(1) amortized
    vec.emplace_back(40);

    // 4. insert(pos, val) - Insert at specific iterator location - O(N)
    vec.insert(vec.begin() + 1, 15); // Result: [10, 15, 20, 40]

    // 5. erase(pos) - Remove element at specific iterator location - O(N)
    vec.erase(vec.begin()); // Result: [15, 20, 40]

    // 6. erase(start, end) - Remove range of elements - O(N)
    vec.erase(vec.begin(), vec.begin() + 1);

    // 7. clear() - Remove all elements - O(N)
    vec.clear();
}

// =============================================================================
// 4. CAPACITY AND SIZE MANAGEMENT
// =============================================================================
void demonstrateCapacity() {
    vector<int> v = {10, 20, 30};

    // 1. size() - Current number of elements
    size_t s = v.size();

    // 2. capacity() - Allocated memory capacity before reallocation
    size_t c = v.capacity();

    // 3. empty() - Check if size is 0
    bool isEmpty = v.empty();

    // 4. reserve(n) - Reserve memory in advance to avoid frequent reallocation
    v.reserve(100);

    // 5. resize(n) - Resize vector to contain n elements
    v.resize(5, 0); // Grows to size 5, padded with 0
}

// =============================================================================
// 5. ITERATION TECHNIQUES
// =============================================================================
void demonstrateIteration() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // 1. Traditional Index-based Loop
    cout << "Index-based: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    // 2. Range-based For Loop (C++11)
    cout << "Range-based: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";

    // 3. Iterators (begin / end)
    cout << "Iterators: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // 4. Reverse Iterators (rbegin / rend)
    cout << "Reverse Iterators: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

// =============================================================================
// 6. 2D VECTOR (GRID / MATRIX)
// =============================================================================
void demonstrate2DVector() {
    int rows = 3, cols = 4;

    // 1. Declare a 3x4 2D vector initialized with zeros
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    // 2. Modifying elements
    matrix[1][2] = 99;

    // 3. Traversal
    cout << "2D Matrix Output:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

// =============================================================================
// 7. TIME COMPLEXITY QUICK SUMMARY
// =============================================================================
/*
 1. Direct Access (`vec[i]`, `at()`, `front()`, `back()`): O(1)
 2. Insert/Delete at End (`push_back()`, `pop_back()`):     O(1) amortized
 3. Insert/Delete at Middle/Start (`insert()`, `erase()`):  O(N)
 4. Searching (Unsorted - `std::find`):                      O(N)
 5. Searching (Sorted - `std::binary_search`):             O(log N)
*/

int main() {
    cout << "=== Element Access Demo ===\n";
    demonstrateElementAccess();
    
    cout << "\n=== Iteration Demo ===\n";
    demonstrateIteration();
    
    cout << "\n=== 2D Vector Demo ===\n";
    demonstrate2DVector();

    return 0;
}
