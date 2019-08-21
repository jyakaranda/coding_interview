/**
 * @file tictoc.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-21
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __TICTOC__
#define __TICTOC__

#include <chrono>

class TicToc
{
public:
  TicToc()
  {
    tic();
  }

  // reset
  void tic()
  {
    t_start_ = std::chrono::system_clock::now();
  }
  // return ms
  double toc()
  {
    std::chrono::duration<double> dura = std::chrono::system_clock::now() - t_start_;
    return dura.count();
  }

private:
  std::chrono::time_point<std::chrono::system_clock> t_start_;
};

#endif