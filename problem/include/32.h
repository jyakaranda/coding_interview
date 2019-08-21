/**
 * @file 32.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-20
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __32__
#define __32__

#include <vector>
#include <cmath>

using namespace std;

/**
 * @brief 统计从 1 到 n 整数中 1 出现的次数
 * 
 * @param n 
 * @return int 
 */
static int count1In1ToN(int n)
{
  if (n < 1)
  {
    return 0;
  }
  else if (n < 10)
  {
    return 1;
  }

  // 分别保存 0~9, 0~99, 0~999 ... 的个数
  vector<int> v_1;
  // 保存 n 的各个位数
  vector<int> v_2;
  v_1.push_back(1);
  v_2.push_back(n % 10);
  int tmp = n / 10;
  int cnt = 1;
  int sum = 1;
  while (tmp > 0)
  {
    v_1.push_back(10 * v_1.back() + pow(10, cnt));
    ++cnt;
    v_2.push_back(tmp % 10);
    tmp /= 10;
  }
  if (n == (pow(10, cnt + 1) - 1))
  {
    return v_1.back();
  }

  int ans = 0;
  for (int i = v_2.size() - 1; i >= 0; --i)
  {
    int num = 0;
    for (int j = i - 1; j >= 0; --j)
    {
      num *= 10;
      num += v_2[j];
    }
    if (i > 0)
    {
      ans += v_1[i - 1];
      if (v_2[i] > 1)
      {
        ans += pow(10, i);
      }
      else if (v_2[i] == 1)
      {
        ans += num + 1;
      }
    }
    else
    {
      ans += v_2[0] != 0;
    }
  }
  return ans;
}

#endif