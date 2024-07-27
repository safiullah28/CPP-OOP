#include <iostream>
#include <string>
using namespace std;
int countWords(const string &input) {
  int count = 0;
  for (int i = 0; i < input.length(); i++) {
    if (input[i] == ' ')
      count++;
  }
  return count;
}
void countVowels(const string &input) {
  int ca = 0, ce = 0, ci = 0, cu = 0, co = 0;
  for (int i = 0; i < input.length(); i++) {
    if (input[i] == 'A' || input[i] == 'a')
      ca++;
    else if (input[i] == 'E' || input[i] == 'e')
      ce++;
    else if (input[i] == 'I' || input[i] == 'i')
      ci++;
    if (input[i] == 'O' || input[i] == 'o')
      co++;
    else if (input[i] == 'U' || input[i] == 'u')
      cu++;
  }
  cout << "Vowel counts " << endl;
  cout << "a : " << ca << endl;
  cout << "e : " << ce << endl;
  cout << "i : " << ci << endl;
  cout << "o : " << co << endl;
  cout << "u : " << cu << endl;
}
string concatenatestrings(const string input[], const int size) {
  string newstr = "";
  for (int i = 0; i < size; i++) {
    newstr += input[i]+ " ";
    
  }
  return newstr;
}
int main() {
  // string str1;
  // cout << "Enter a string : ";
  // getline(cin, str1);

  // Task 02
  // cout << "String 1: " << str1 << endl;
  // string str2 = " ";
  // str2 = str1;
  // int j = 0;
  // for (int i = str1.length() - 1; i >= 0; i--) {
  //   str2[j] = str1[i];
  //   j++;
  // }
  // cout << "String 2 : " << str2 << endl;
  // if (str1.compare(str2) == 0)
  //   cout << "String is palindrome" << endl;
  // else
  //   cout<<"String is not palindrome"<<endl;

  // Task 02
  // cout<<"Number of words in entered string is : "<<countWords(str1)<<endl;

  // Task 03
  // countVowels(str1);

  // Task 04
  const int size = 4;
  string strs[4] = {"Learn C++", "Code daily", "Practice coding", "Succeed"};
  cout<<concatenatestrings(strs,size);
  return 0;
}