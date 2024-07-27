#include <iostream>
#include <string>
using namespace std;

int main() {
  //   string name;
  //   cout << "Enter name: ";
  //   getline(cin, name);

  //   int length = 0;

  //   // length=name.length();
  //   // cout<<"Name is "<<name<<" and length is "<<length<<endl;

  //   // length=name.size();
  //   // cout<<"Name is "<<name<<" and size is "<<length<<endl;

  //   cout << "Name is " << name << " and size is " << length << endl;

  // Append function

  // string str;
  // string str2 = "Writing ";
  // string str3 = "print 10 and then 5 more";
  // // used in the same order as described above:
  // str.append(str2);
  // cout<<str<<endl;
  // str.append(str3, 6,3);
  // cout<<str<<endl;
  // str.append("dots are cool", 5);
  // cout<<str<<endl;
  // str.append("here: ");
  // cout<<str<<endl;
  // // str.append(10u, 'a');         //u is for putting no. of characters S
  // str.append(10u, '.');         //u is for putting no. of characters S
  // cout<<str<<endl;
  // str.append(str3.begin() + 8, str3.end()); // str.begin() gives the first
  // character of the string
  // std::cout << str <<endl;

  // Assign function

  // string str;
  // string base="The quick brown fox jumps over a lazy dog.";

  // // used in the same order as described above:
  // str.assign(base);
  // cout << str << '\n';

  // str.assign(base,10,9);
  // cout << str << '\n';         // "brown fox"

  // str.assign("pangrams are cool",7);
  // cout << str << '\n';         // "pangram"

  // str.assign("c-string");
  // cout << str << '\n';         // "c-string"

  // str.assign(10,'*');
  // cout << str << '\n';         // "**********"

  //      // "----------"

  // str.assign(base.begin()+16,base.end()-12);
  // cout << str << '\n';         // "fox jumps over"

  // At function
  // string str ("Test string");
  // for (unsigned i=0; i<str.length(); ++i)
  // {
  //   cout << str.at(i);
  // }
  // cout<<endl<<str.at(7);

  // Back function (replaces end od the string with character user put)
  // string str("hello world");
  // str.back() = '!';
  // cout << str << '\n';


  // Begin function
  // string str = "Hello, world!";

  // // Using iterators to iterate over the string
  // for (auto it = str.begin(); it != str.end(); ++it) {
  //   cout << *it << " ";
  // }

  // std::cout << std::endl;


  // 4functions
  // string str ("Test string");
  // cout << "size: " << str.size() << "\n";
  // cout << "length: " << str.length() << "\n";
  // cout << "capacity: " << str.capacity() << "\n";
  // cout << "max_size: " << str.max_size() << "\n";
  //cout << "Reverse: " << reverse(str.end()) << "\n";

  // Compare
  string str1 ("green apple");
  string str2 ("red apple");

  // if (str1.compare(str2) != 0)
  //   cout << str1 << " is not " << str2 << '\n';

  // if (str1.compare(6,5,"apple") == 0)
  //   cout << "still, " << str1 << " is an apple\n";

  // if (str2.compare(str2.size()-5,5,"apple") == 0)
  //   cout << "and " << str2 << " is also an apple\n";

  // if (str1.compare(6,5,str2,4,5) == 0)
  //   cout << "therefore, both are apples\n";


  //Copy 
  // char buffer[20];
  // string str ("Test string...");
  // size_t length = str.copy(buffer,6,5);
  // buffer[length]='\0';
  // cout << "buffer contains: " << buffer << '\n';
  

  return 0;
}