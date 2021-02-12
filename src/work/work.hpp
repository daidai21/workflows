/* ****************************************************************************
 * File Name   : work.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:29:10 2021
 *************************************************************************** */

#ifndef __WORK_HPP__
#define __WORK_HPP__

#include <string>

#include "./work_report.hpp"

namespace workflows {

template <typename T>
class Callable {
 public:
  virtual T* call();
};

class Work : public Callable<WorkReport> {
 public:
  virtual std::string get_name();

  virtual WorkReport* call();
};

}  // namespace wfcc

#endif  // __WORK_HPP__
