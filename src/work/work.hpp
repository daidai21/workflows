/* ****************************************************************************
 * File Name   : work.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:29:10 2021
 *************************************************************************** */

#ifndef __WORK_HPP__
#define __WORK_HPP__

#include <string>

#include "./../utils/UUID.hpp"
#include "./../work/work_context.hpp"
#include "./work_report.hpp"

namespace workflows {

class Work {
 public:
  std::string get_name() {
    return random_UUID();
  }

  WorkReport* execute(WorkContext* workContext);
};

}  // namespace workflows

#endif  // __WORK_HPP__
