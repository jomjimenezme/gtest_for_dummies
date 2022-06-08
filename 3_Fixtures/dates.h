// class date, copy constructur added
// author:  Holger Arndt
// version: 09.10.2019
// Modified by: Jose M Jimenez M

//-----------------------------CPP recap----------------------------------------
//  static members:
//    - Are not bound to any instance but exist only once for each class.
//    - have to be initialized outside the class or marked with "inline".
//   
//  "explicit" constructors:
//    -Avoid implicit conversions.
//------------------------------------------------------------------------------


#include <iostream>

using namespace std;

class Date
{
private:
  int day;
  int month;
  int year;
  static inline const int daysPerMonth[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  static const int stdYear{1970};
  void checkDate();
public:
  explicit Date(int d = 1, int m = 1, int y = stdYear) : day{d}, month{m}, year{y}
  {
    checkDate();
  }
  Date(const Date& d2) : day{d2.day}, month{d2.month}, year{d2.year} {} //This is a "COPY CONSTRUCTOR"
  int getDay() const { return day; }
  int getMonth() const { return month; }
  int getYear() const { return year; }
  void setDate(int d, int m, int y)
  {
    day = d;
    month = m;
    year = y;
    checkDate();
  }
  Date& incDay();
  void print() const { cout << day << '.' << month << '.' << year << endl; }

  static bool isLeapYear(int year) //probably better implemented in other class (?)
  { return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; };
};

