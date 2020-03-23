#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <cassert>
#include <stack>
#include <limits>
#include <deque>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <iterator>
#include <set>
#include <cmath>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  void RunTest()
  {
    vector<int> nums = {1,2,1,4,5};
    int result = findPeakElement(nums);
    cout << "result: " << result << endl;
  }

  int findPeakElement(vector<int>& nums) {
    return Helper(nums, 0, nums.size()-1);
  }

  int Helper(const vector<int> &num, int low, int high)
  {
    if(low == high)
      return low;
    else
    {
      int mid1 = (low+high)/2;
      int mid2 = mid1+1;
      if(num[mid1] > num[mid2])
        return Helper(num, low, mid1);
      else
        return Helper(num, mid2, high);
    }
  }

  template<class T>
  void Show(vector<T> &result)
  {
    for (size_t i = 0; i < result.size(); ++i)
    {
      cout << result[i] << ", ";
    }
    cout << endl;
  }

  template<class T>
  void Show(vector<vector<T>> &result)
  {
    for (size_t i = 0; i < result.size(); ++i)
    {
      for (size_t j = 0; j < result[i].size(); ++j)
      {
        cout << result[i][j] << ", ";
      }
      cout << endl;
    }
  }
};

int main()
{
  Solution *solution = new Solution();
  solution->RunTest();

  return 0;
}
