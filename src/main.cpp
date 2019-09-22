// classes example
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include "Rectangle.h"

using namespace std;

long fibonacci(unsigned n) {
  if (n < 2) return n;
  return fibonacci(n -1) + fibonacci(n -2);
}

int main()
{
  chrono::time_point<chrono::system_clock> start, end;
  start = chrono::system_clock::now();
  cout << "f(42) = " << fibonacci(42) << '\n';
  end = chrono::system_clock::now();

  chrono::duration<double> elapsed_seconds = end - start;
  time_t end_time = chrono::system_clock::to_time_t(end);

  cout  << "finished compuation at " << ctime(&end_time)
        << "elapsed time: " << elapsed_seconds.count() << "s\n";

  Rectangle rect;
  rect.set_values(10, 4);
  cout << "Rectangle area: " << rect.area() << "\n";
  return 0;
}