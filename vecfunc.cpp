#include <vector>
using namespace std;
vector<int> increaseVector(vector<int> vec, int n) {
  for (int& element : vec) {
    element += n;
  }
  return vec;
}
