#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;
void input(int *arr, const int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 100 + 1;
  }
}
void display(const int *arr, const int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int *squareelements(const int arr[], const int size, int &newarr) {
  int *newArray;
  newarr = size;
  if (newarr <= 0)
    return NULL;
  newArray = new int[newarr];
  for (int i = 0; i < size; i++) {
    newArray[i] = arr[i] * arr[i];
  }
  return newArray;
}

int *pairwiseSum(const int *arr, const int size, int &newarr) {
  int *newArray;
  newarr = size;
  if (newarr < 0)
    return NULL;
  newArray = new int[newarr];

  if (size % 2 == 0) {

    newarr = size / 2;
    int j = 0;
    for (int i = 0; i < newarr; i++) {
      newArray[i] = (arr[j] + arr[j + 1]);
      j = j + 2;
    }
  }

  else if (size % 2 == 1) {
    newarr = (size / 2) + 1;
    int j = 0;
    for (int i = 0; i < newarr; i++) {
      if (j < size - 2) {
        newArray[i] = (arr[j] + arr[j + 1]);
      } else {
        newArray[i] = arr[j];
      }
      j = j + 2;
    }
  }
  return newArray;
}

char *reverseCase(const char *str) {
  int length = strlen(str) + 1;
  char *result;
  if (length == 0)
    return NULL;

  result = new char[length];
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      if (islower(str[i])) {
        result[i] = toupper(str[i]);
      } else if (isupper(str[i])) {
        result[i] = tolower(str[i]);
      }
    } else {
      result[i] = str[i];
    }
  }
  return result;
}

int main() {
  srand(time(NULL));

  // Task 01
  // const int s1 = 6;
  // int arr[s1];
  // input(arr, s1);
  // display(arr, s1);
  // int *squared;
  // int s2 = 0;
  // squared = squareelements(arr, s1, s2);
  // cout << "Squared Array " << endl;
  // display(squared, s2);
  // delete[] squared;
  // squared = 0;

  // Task 02
  // const int s1 = 8;
  // int arr[s1]={1,2,3,4,5,6,7,8};
  // input(arr, s1);
  // display(arr, s1);
  // int *SUM;
  // int s2=0;
  // SUM=pairwiseSum(arr,s1,s2);
  // cout<<endl<<"New Array: "<<endl;
  // display(SUM, s2);
  // delete[]SUM;
  // SUM=0;

  // Task 03

  // const char* str="Hello, four Score And Seven years Ago!";
  char str[1000] = "";
  cout << "Enter the string : ";
  cin.getline(str, 1000);
  char *str2;
  str2 = reverseCase(str);
  cout << endl << "String 2 is " << endl;
  cout << str2;
  delete[] str2;

  return 0;
}