#include <iostream>
#include <cstring>
using namespace std;

class String {
  private:
    char* str;

  public:
    String(const char* s = "") {
      str = new char[strlen(s) + 1];
      strcpy(str, s);
    }

    String(const String& s) {
      str = new char[strlen(s.str) + 1];
      strcpy(str, s.str);
    }

    ~String() {
      delete [] str;
    }

    String operator+(const String& s) const {
      char* temp = new char[strlen(str) + strlen(s.str) + 1];
      strcpy(temp, str);
      strcat(temp, s.str);
      String newStr = String(temp);
      delete [] temp;
      return newStr;
    }

    void display() const {
      cout << str << endl;
    }
};

int main() {
  String s1 = "Hello, ";
  String s2 = "world!";
  String s3 = s1 + s2;

  s3.display(); // Output: Hello, world!

  return 0;
}
