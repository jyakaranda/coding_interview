/**
 * @file 36.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-22
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __36__
#define __36__

#include <vector>

using namespace std;

static int merge(vector<int> &left, vector<int> &right, vector<int> &all)
{
  all.clear();
  int i = 0, j = 0;
  int cnt = 0;
  while (i < left.size() && j < right.size())
  {
    if (left[i] <= right[j])
    {
      all.push_back(left[i]);
      ++i;
    }
    else
    {
      all.push_back(right[j]);
      ++j;
      cnt += left.size() - i;
    }
  }
  while (i < left.size())
  {
    all.push_back(left[i]);
    ++i;
  }
  while (j < right.size())
  {
    all.push_back(right[j]);
    ++j;
  }
  return cnt;
}

static void mergeSort(vector<int> &v_in, int &cnt)
{
  if (v_in.size() <= 1)
  {
    return;
  }

  vector<int> v_left(v_in.begin(), v_in.begin() + v_in.size() / 2);
  vector<int> v_right(v_in.begin() + v_in.size() / 2, v_in.end());
  mergeSort(v_left, cnt);
  mergeSort(v_right, cnt);
  cnt += merge(v_left, v_right, v_in);
}

/**
 * @brief 统计数组中逆序对的个数
 * 
 * @param v_in 
 * @return int 
 */
static int inversePair(const vector<int> &v_in)
{
  int ans = 0;
  vector<int> v_copy(v_in.begin(), v_in.end());
  mergeSort(v_copy, ans);
  return ans;
}

#endif