/* ****************************************************************************
 * File Name   : work_report.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:29:31 2021
 *************************************************************************** */

#ifndef __WORK_REPORT_HPP__
#define __WORK_REPORT_HPP__

#include <exception>

#include "./../config/work_status.hpp"
#include "./work_context.hpp"

namespace workflows {

class WorkReport {
 public:
  virtual WorkStatus get_status();

  virtual std::exception get_error();

  virtual WorkContext* get_context();
};

}  // namespace workflows

#endif  // __WORK_REPORT_HPP__
