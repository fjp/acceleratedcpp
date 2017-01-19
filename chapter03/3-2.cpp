#include <algorithm> // sort
#include <iomanip> // setprecision
#include <ios> // streamsize
#include <iostream> // cin, cout
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::sort;
using std::vector;

int main(int argc, char const *argv[]) {
  // define vector to store numbers
  vector<int> v;
  typedef vector<int>::size_type vec_sz;

  int x;

  // askf for numbers
  cout << "Please enter numbers: ";


  while (cin >> x) {
    v.push_back(x);
  }

  vec_sz size = v.size();

  cout << "Vector size is: " << size << endl;

  // sort vector
  sort(v.begin(), v.end());

  cout << v << endl;

  return 0;
}
