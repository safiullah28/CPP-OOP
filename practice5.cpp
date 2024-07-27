#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void sumbyptr(int *a, int *b, int *sum) { *sum = *a + *b; }

void arraybyPtr(double *ptr, int size) {
  for (int i = 0; i < size; i++) {
    cout << i + 1 << " : " << &(*(ptr + i)) << endl;
  }
}

void input(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    *(arr + i) = rand() % 100 + 1;
  }
}
void display(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void getEvenOddSum(int *ptr, int size, int *evensum, int *oddsum) {
  for (int i = 0; i < size; i++) {
    if (ptr[i] % 2 == 0) {
      *evensum += ptr[i];
    } else {
      *oddsum += ptr[i];
    }
  }
}

int main() {
  // Task 01
  // float f=2.5,t=8.9;
  // float *ptrF,*ptrT;
  // ptrF=&f;
  // ptrT=&t;
  // cout<<"Address of F : "<<&f<<endl;
  // cout<<"Value of F : "<<f<<endl;
  // cout<<"Address of ptrF : "<<&ptrF<<endl;
  // cout<<"Value of ptrF : "<<ptrF<<endl;
  // cout<<"Value of Memory location ptrF: "<<*ptrF<<endl;
  // cout<<"Address of T : "<<&t<<endl;
  // cout<<"Value of T : "<<t<<endl;
  // cout<<"Address of ptrT : "<<&ptrT<<endl;
  // cout<<"Value of ptrT : "<<ptrT<<endl;
  // cout<<"Value of Memory location ptrT: "<<*ptrT<<endl;

  // Task 2
  // int a=0,b=0;
  // cout<<"Enter a :";
  // cin>>a;
  // cout<<"Enter b :";
  // cin>>b;
  // int sum1;
  // sumbyptr(&a,&b,&sum1);
  // cout<<"Sum is "<<sum1<<endl;

  // Task 03
  // double arr[5] = {1, 2, 3, 4, 5};
  // arraybyPtr(arr, 5);

  // Task 04
  const int size = 50;
  int evensum = 0, oddsum = 0;
  int arr[size];
  srand(time(0));
  input(arr, size);
  display(arr, size);
  getEvenOddSum(arr, size, &evensum, &oddsum);
  cout << "Even sum : " << evensum << endl << "Odd sum : " << oddsum;
  return 0;
}