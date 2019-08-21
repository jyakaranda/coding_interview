/**
 * @file 30.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-19
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __30__
#define __30__

#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief 返回 v_in[s] 的插入位置
 * 
 * @param v_in 
 * @param s 
 * @param e 
 * @return int 
 */
int helper(vector<int> &v_in, int s, int e)
{
  if (s == e || (e - s) == 1)
  {
    return s;
  }

  int pivot = s;
  ++s;
  while (true)
  {
    while (v_in[s] <= v_in[pivot])
    {
      ++s;
    }
    --e;
    while (v_in[pivot] <= v_in[e])
    {
      --e;
    }
    if (!(s < e))
    {
      swap(v_in[pivot], v_in[e]);
      return e;
    }
    else
    {
      swap(v_in[s], v_in[e]);
      ++s;
    }
  }
}

/**
 * @brief 输出最小的 k 个数到 v_out 中
 * 
 * @param v_in 
 * @param v_out 
 */
static void minKNums(vector<int> &v_in, int k, vector<int> &v_out)
{
  v_out.clear();
  if (k <= 0)
  {
    return;
  }
  if (v_in.size() <= k)
  {
    v_out.reserve(v_out.size());
    v_out.insert(v_out.end(), v_in.begin(), v_in.end());
    return;
  }

  int s = 0, e = v_in.size();
  while (s < e && k > 0)
  {
    int pos = helper(v_in, s, e);
    int left_size = pos - s + 1;
    if (left_size > k)
    {
      e = pos;
    }
    else if (left_size == k)
    {
      v_out.insert(v_out.end(), v_in.begin() + s, v_in.begin() + pos + 1);
      return;
    }
    else
    {
      v_out.insert(v_out.end(), v_in.begin() + s, v_in.begin() + pos + 1);
      s = pos + 1;
      k -= left_size;
    }
  }
}

static void insertHeap(vector<int> &v_in, int n)
{
  v_in.push_back(n);
  int p = (v_in.size() - 1) / 2;
  int c = v_in.size() - 1;
  while (p >= 0)
  {
    if (v_in[c] > v_in[p])
    {
      swap(v_in[c], v_in[p]);
      c = p;
      p = (p - 1) / 2;
    }
    else
    {
      break;
    }
  }
}

static void adjustHeap(vector<int> &v_in, int root)
{
  int pole = root;
  int c = 2 * pole + 1;
  while (c < v_in.size())
  {
    if ((c + 1) < v_in.size() && v_in[c] < v_in[c + 1])
    {
      ++c;
    }
    if (v_in[c] > v_in[pole])
    {
      // v_in[pole] = v_in[c];
      swap(v_in[pole], v_in[c]);
      pole = c;
      c = 2 * pole + 1;
    }
    else
    {
      break;
    }
  }
}

static void popHeap(vector<int> &v_in)
{
  if (v_in.size() == 1)
  {
    v_in.pop_back();
    return;
  }
  else if (v_in.size() == 0)
  {
    return;
  }
  swap(v_in[0], v_in[v_in.size() - 1]);
  v_in.pop_back();
  adjustHeap(v_in, 0);
}

static void makeHeap(vector<int> &v_in)
{
  int last_p = (v_in.size() - 1) / 2;
  while (last_p >= 0)
  {
    adjustHeap(v_in, last_p);
    --last_p;
  }
}

static void minKNums1(const vector<int> &v_in, int k, vector<int> &v_out)
{
  v_out.clear();
  for (int i = 0; i < v_in.size(); ++i)
  {
    if (v_out.size() < k)
    {
      insertHeap(v_out, v_in[i]);
    }
    else
    {
      if (v_in[i] < v_out[0])
      {
        popHeap(v_out);
        insertHeap(v_out, v_in[i]);
      }
    }
  }
}

#endif