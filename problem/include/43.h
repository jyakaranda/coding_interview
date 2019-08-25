/**
 * @file 43.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-24
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __43__
#define __43__

#include <vector>
#include <cmath>

using namespace std;

static void helper(int nth, int n, int cur, vector<int> &cnt)
{
  if (nth == n)
  {
    ++cnt[cur - n];
    return;
  }
  for (int i = 1; i <= 6; ++i)
  {
    helper(nth + 1, n, cur + i, cnt);
  }
}

/**
 * @brief 返回 n 个骰子各个点数和(n~6n)的概率
 * 
 * @param n 
 * @param v_out 
 */
static void nDices(int n, vector<double> &v_out)
{
  v_out.clear();
  if (n <= 0)
  {
    return;
  }
  vector<int> cnt(5 * n + 1);
  helper(0, n, 0, cnt);
  v_out.resize(cnt.size());
  double sum = pow(6, n);
  for (int i = 0; i < cnt.size(); ++i)
  {
    v_out[i] = cnt[i] / sum;
  }
}

static void nDices2(int n, vector<double> &v_out)
{
  if (n < 1)
  {
    return;
  }
  vector<vector<int>> v_probs(2, vector<int>(6 * n + 1, 0));
  int flag = 0;
  for (int i = 1; i <= 6; ++i)
  {
    v_probs[flag][i] = 1;
  }
  for (int nth = 2; nth <= n; ++nth)
  {
    for (int i = 0; i < nth; ++i)
    {
      v_probs[1 - flag][i] = 0;
    }

    for (int i = nth; i <= 6 * nth; ++i)
    {
      v_probs[1 - flag][i] = 0;
      for (int j = 1; j < i && j <= 6; ++j)
      {
        v_probs[1 - flag][i] += v_probs[flag][i - j];
      }
    }
    flag = 1 - flag;
  }
  v_out.clear();
  v_out.resize(5 * n + 1);
  double sum = pow(6, n);
  for (int i = 0; i < v_out.size(); ++i)
  {
    v_out[i] = v_probs[flag][i + n] / sum;
  }
}

#endif