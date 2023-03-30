#include <iostream>

// Template function to sort an array of any data type
template<typename T>
void sortArray(T arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[i]) {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  // Sort an integer array
  int intArr[] = {5, 2, 9, 1, 7};
  int intSize = sizeof(intArr) / sizeof(int);
  std::cout << "Before sorting: ";
  for (int i = 0; i < intSize; i++) {
    std::cout << intArr[i] << " ";
  }
  std::cout << std::endl;
  sortArray(intArr, intSize);
  std::cout << "After sorting: ";
  for (int i = 0; i < intSize; i++) {
    std::cout << intArr[i] << " ";
  }
  std::cout << std::endl;

  // Sort a double array
  double doubleArr[] = {3.14, 2.71, 1.41, 1.61};
  int doubleSize = sizeof(doubleArr) / sizeof(double);
  std::cout << "Before sorting: ";
  for (int i = 0; i < doubleSize; i++) {
    std::cout << doubleArr[i] << " ";
  }
  std::cout << std::endl;
  sortArray(doubleArr, doubleSize);
  std::cout << "After sorting: ";
  for (int i = 0; i < doubleSize; i++) {
    std::cout << doubleArr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
