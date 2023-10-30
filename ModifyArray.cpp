#include <iostream>
using namespace std; 
int main() {
    const int maxSize = 100;
    int arr[maxSize],size,index,newValue;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    cout << "Enter the index of the element to modify: ";
    cin >> index;
    if (index < 0 || index >= size) {
        cout << "Invalid index. Index should be between 0 and " << size - 1 << endl;
        return 1; // Exit with an error code
    }
    cout << "Enter the new value for the element: ";
    cin >> newValue;
    arr[index] = newValue;
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
    }
   cout << std::endl;
    return 0; 
}
