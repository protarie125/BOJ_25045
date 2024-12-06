#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N, M;
vl A, B;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> M;
  A = vl(N);
  for (auto&& a : A) cin >> a;
  B = vl(M);
  for (auto&& b : B) cin >> b;

  sort(A.rbegin(), A.rend());
  sort(B.begin(), B.end());

  ll ans = 0;
  for (auto i = 0; i < N && i < M; ++i) {
    if (A[i] - B[i] > 0) {
      ans += A[i] - B[i];
    }
  }

  cout << ans;

  return 0;
}