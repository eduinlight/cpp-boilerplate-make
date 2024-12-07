#include <bits/stdc++.h>

using namespace std;

#define L(i, s, e) for (int i = (s); (i) <= (e); (i)++)
#define R(i, s, e) for (int i = (s); (i) >= (e); (i)--)
#define sz(v) ((int)v.size())

typedef int64_t i64;
typedef int32_t i32;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;
typedef pair<int, int> pii;
typedef complex<double> Point;
typedef vector<i32> v32;
typedef vector<i64> v64;

template <class T, class Q>
ostream &operator<<(ostream &os, const pair<T, Q> &v) {
  os << "{ " << "f: " << v.first << ", s: " << v.second << " }";
  return os;
}

template <class T> ostream &operator<<(ostream &os, const vector<T> &v) {
  os << "[ ";
  L(i, 0, sz(v) - 1) os << v[i] << (i == sz(v) - 1 ? "" : ", ");
  os << " ]";
  return os;
}

void run() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  run();
  return EXIT_SUCCESS;
}
