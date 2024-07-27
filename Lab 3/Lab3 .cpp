#include <iostream>

using namespace std;

void input(float *arr, const int size) {
  cout << "Enter the elements in array " << endl;

  for (int i = 0; i < size; i++) {

    cout << i + 1 << " : ";

    cin >> arr[i];
  }
}

void average(float *arr, const int size) {

  float avg = 0;

  for (int i = 0; i < size; i++) {

    avg += arr[i];
  }

  avg /= size;

  cout << "Average of array elements are " << avg << endl;
}

void input2(int *arr, const int size) {
  cout << "Enter the elements in array " << endl;

  for (int i = 0; i < size; i++) {

    cout << i + 1 << " : ";

    cin >> arr[i];
  }
}

void display(const int *arr, const int size) {

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int *getEvennumbers(const int ar[], const int size, int &evenArraySize) {
  int *evenArray;

  for (int i = 0; i < size; i++) {

    if (ar[i] % 2 == 0)

      evenArraySize++;
  }

  if (evenArraySize == 0) {
    evenArray = nullptr;
  }

  evenArray = new int[evenArraySize];

  for (int i = 0, j = 0; i < size; i++) {

    if (ar[i] % 2 == 0) {

      evenArray[j] = ar[i];

      j++;
    }
  }

  return evenArray;
}

void getPosNeg(const int arr[], const int size, int *&posArray, int &posSize,
               int *&negArray, int &negSize) {

  for (int i = 0; i < size; i++) {

    if (arr[i] < 0)
      negSize++;
    else
      posSize++;
  }

  if (negSize == 0)
    negArray = nullptr;

  if (posSize == 0)
    posArray = nullptr;

  posArray = new int[posSize];

  negArray = new int[negSize];

  for (int i = 0, j = 0, k = 0; i < size; i++) {

    if (arr[i] < 0) {

      negArray[j] = arr[i];

      j++;
    }
  }

  for (int i = 0, j = 0, k = 0; i < size; i++) {

    if (arr[i] > 0) {

      posArray[j] = arr[i];

      j++;
    }
  }
}

int main() {

  // Task 1

  // int* ptrX = nullptr;
  // int* ptrY = nullptr;

  // int *a = new int(2);
  // int *b = new int(8);

  // ptrX = a;

  //	//	Pointer X
  //
  // cout << "Address of ptr X = " << &ptrX << endl;
  // cout << "Value of ptr X = " << *ptrX << endl;
  // cout << "Address ptr X pointing to = " << ptrX << endl<<endl;

  //	//	Pointer Y

  // cout << "Address of ptr Y = " << &ptrY << endl;
  // cout << "Value of ptr Y = " << *ptrY << endl;
  // cout << "Address ptr Y pointing to = " << ptrY << endl << endl;

  // delete ptrX;
  // delete ptrY;

  // Task 02

  // int size=0;
  //
  // cout << "Enter the size of array : ";
  //
  // cin >> size;
  //
  // float* arr = new float[size];
  //
  // input(arr, size);
  //
  // average(arr, size);

  // delete[]arr;

  // Task 03

  /*int array[10],evenArraysize=0;

  input2(array, 10);

  int* evenArray;

  evenArray = getEvennumbers(array, 10,evenArraysize);


  if (evenArraysize == 0)
          cout << endl << "No odd numbers exist in array " << endl;

  display(evenArray, evenArraysize);

  delete[] evenArray;*/

  // Task 04

  /*int array[10];

  input2(array, 10);

  int posSize = 0, negSize = 0;

  int* posArray,*negArray;

  getPosNeg(array, 10, posArray, posSize, negArray, negSize);

  if (posSize == 0)
          cout << "Positive array is empty "<<endl;

  if (negSize == 0)
          cout << "Negative array is empty "<<endl;


  cout << endl;
  display(posArray, posSize);

  cout << endl;

  display(negArray, negSize);

  delete[] negArray;
  delete[]posArray;*/

  return 0;
}