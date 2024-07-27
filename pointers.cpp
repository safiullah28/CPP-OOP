#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void setnum(int *num) {
  cout << "Enter num : ";
  cin >> *num;
}
void getnum(int *num) { *num = *num + 1; }

void setarray(int *array, int size) {

  for (int i = 0; i < size; i++) {
    cout << i + 1 << " : ";
    cin >> array[i];
  }
}
void setarray2(int *array, int size) {

  for (int i = 0; i < size; i++) {
    cout << i + 1 << " : ";
    cin >> *(array + i);
  }
}
void setarray3(int *array, int size) {
  int *ptr;
  for (int i = 0; i < size; i++) {
    cout << i + 1 << " : ";
    ptr = &array[i];
    cin >> *ptr;
  }
}
void setarray4(int *array, int size) {
  int *ptr;
  ptr = &array[0];
  for (int i = 0; i < size; i++) {
    cout << i + 1 << " : ";
    cin >> *ptr;
    ptr++;
  }
}

void getarray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
}
void getarray2(int *array, int size) {
  for (int i = 0; i < size; i++) {
    cout << *(array + i) << " ";
  }
}
void getarray3(int *array, int size) {
  int *ptr;
  for (int i = 0; i < size; i++) {
    ptr = &array[i];
    cout << *ptr << " ";
  }
}
void getarray4(int *array, int size) {
  int *ptr;
  ptr = &array[0];
  for (int i = 0; i < size; i++) {
    cout << *ptr << " ";
    ptr++;
  }
}
int main() {
  //   int x = 25, y = 50, z = 75;
  //   int *ptr;
  //   ptr = &x;
  //   *ptr += 100;
  //   delete ptr;
  //   ptr = &y;
  //   *ptr += 100;
  //   delete ptr;
  //   ptr = &z;
  //   *ptr += 100;
  //   delete ptr;
  //   cout << "X : " << x << endl<<"Y : " << y << endl<<"Z : " << z << endl;

  //   int p = 35;
  //   int *ptr;
  //   ptr = &p;
  //   cout << "p = " << p << endl;
  //   cout << "ptr = " << ptr << endl;
  //   cout << "Address of ptr = " << &ptr << endl;
  //   cout << "Value of ptr = " << *ptr << endl;
  //   int y = 40;
  //   ptr = &y;
  //   cout << "y = " << y << endl;
  //   cout << "ptr = " << ptr << endl;
  //   cout << "Address of ptr = " << &ptr << endl;
  //   *ptr += 40;
  //   cout << "Value of ptr = " << *ptr << endl;
  //   cout << "Y = " << y << endl;

  
  
  
  
  
  // Arrays with pointers



  int a[10];
  // srand(time(0));
  // for (int i = 0; i < 10; i++) {
  //   a[i] = rand() % 10;
  // }

  //   //1st way to access array with pointers
  //   cout<<"1st way to to access array with pointers"<<endl;
  //   for(int i=0; i<10; i++)
  //   {
  //     cout<<*(a+i)<<" ";
  //   }
  //   cout<<endl<<"2nd way to to access array with pointers"<<endl;
  //   int *ptr=a;
  //   for(int i=0; i<10;i++)
  //   {
  //     cout<<ptr[i]<<" ";
  //   }
  //   cout<<endl<<"3rd way to to show array with pointers"<<endl;
  //   for(int i=0; i<10;i++)
  //   {
  //     ptr=&a[i];  //Accessing the index of array one by one
  //     cout<<*ptr<<" "; //Showing array elements one by one
  //   }

  // cout << endl << "4th way to to show array with pointers" << endl;
  // int *ptr;
  // ptr = &a[0];
  // for (int i = 0; i < 10; i++) {
  //   cout << *ptr << " ";
  //   ptr++;
  // }
  // cout << endl << "Address of pointer is " << ptr << endl;
  // for (int i = 0; i < 10; i++) {
  //   ptr--;
  //   cout << *ptr << " ";
  // }
  // cout << endl << "Address of pointer is " << ptr << endl;






  
  // Pointers to functions

  // int a1=0;
  // setnum(&a1);
  // getnum(&a1);
  // cout<<"Num = "<<a1<<endl;

  // 1st Way
  // setarray(a, 10);
  // getarray(a, 10);
  //cout << endl;

  // 2nd way
  // setarray2(a, 10);
  // getarray2(a, 10);
  // 3rd way
  // setarray3(a, 10);
  // getarray3(a, 10);
  // 4th way
  // setarray4(a, 10);
  // getarray4(a, 10);

  return 0;
}