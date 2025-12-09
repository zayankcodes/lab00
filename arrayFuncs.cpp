#include <cassert>
#include "arrayFuncs.h"
#include <sstream> // for ostringstream

// intToString converts an int to a string
std::string intToString(int i) {
  std::ostringstream oss;
  oss << i;
  return oss.str();
}

// arrayToString converts an int array to a string, e.g. {3,14,15}
std::string arrayToString(int a[], int size) {
  std::string result = "{";
  for (int i = 0; i < size; i++) {
    result += intToString(a[i]);
    if (i < size - 1) {
      result += ",";
    }
  }
  result += "}";
  return result;
}

// indexOfMax
// Return index of largest value; break ties by smallest index
int indexOfMax(int *a, int n) {
  assert(n >= 1);
  int maxIndex = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[maxIndex]) {
      maxIndex = i;
    }
  }
  return maxIndex;
}

// indexOfMin
// Return index of smallest value; break ties by smallest index
int indexOfMin(int *a, int n) {
  assert(n >= 1);
  int minIndex = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] < a[minIndex]) {
      minIndex = i;
    }
  }
  return minIndex;
}

// swap the values of a[i] and a[j]
void swap(int *a, int i, int j) {
  int tmp = a[i];
  a[i] = a[j];
  a[j] = tmp;
}
