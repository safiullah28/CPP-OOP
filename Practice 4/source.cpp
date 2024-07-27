#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
  // Task 01
  /*ifstream file("quotes.txt");
  if (file.is_open())
  {
          string str1;
          float CGPA;
          int roll_num=0;
          cout << "Roll no.\t\t Name\t\t\tCGPA" << endl;
          while (!file.eof()) {
                  file >> roll_num;
                  getline(file, str1);
                  string str2, str3 ;
                  str2 = str1;
                  str3 = str1;
                  int j = 0,k=0;
                  for (int i = 0; i < str1.length(); i++)
                  {
                          if (isalpha(str1[i])||str1[i]==' ')
                          {
                                  str2[j] = str1[i];
                                  j++;
                          }
                          else if (str1[i] == '.' || isdigit(str1[i]))
                          {
                                  str3[k] = str1[i];
                                  k++;

                          }
                  }
                  str2.resize(j);
                  str3.resize(k);
                  CGPA = stof(str3);
                  cout << roll_num << "\t\t\t"<<str2<<"\t\t"<<CGPA<<endl;
          }
  }
  else {
          cerr << "Unable to open file" << endl;
  }*/

  // Task 02
  /*ifstream file2("input.txt");
  if (file2.is_open()) {
          int roll_num[3] = { 101,102,103 };
          int arr[10];
          int i = 0,j=0,max;
          while (file2>>arr[i])
          {
                  if (i == 0)
                  {
                          cout << roll_num[j]<<" ";
                          j++;
                          max = arr[i];
                  }
                  cout << arr[i]<<" ";
                  if (arr[i] > max) {
                          max = arr[i];
                  }
                  i++;
                  if (i % 10 == 0)
                  {
                          cout << max;
                          cout << endl;
                          i = 0;

                  }

          }

  }
  else {
          cerr << "Unable to open file";
  }*/

  // Task 03
  /*ifstream file3("input.txt");
  if (file3.is_open())
  {
          cout << "File Opened"<<endl;
          int roll_num[3]={101,102,103}, i = 0, j = 0, temp, a[10];
          while (file3>>a[i])
          {
                  if (i == 0)
                  {
                          cout << roll_num[j] << " ";
                          j++;

                  }
                  if (i == 9) {
                          for (int k = 0; k < i; k++)
                          {
                                  for (int l = 0; l < i; l++)
                                  {
                                          if (a[l] > a[l + 1])
                                          {
                                                  temp = a[l];
                                                  a[l] = a[l + 1];
                                                  a[l + 1] = temp;
                                          }
                                  }
                          }

                  }
                  i++;
                  if (i % 10 == 0)
                  {
                          cout << a[i - 2] << " " << a[i - 1];
                          cout << endl;
                          i = 0;
                  }

          }
  }
  else {
          cerr << "Unable to open the file";
  }*/

  return 0;
}