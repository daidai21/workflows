/* ****************************************************************************
 * File Name   : work_status.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:30:49 2021
 *************************************************************************** */

#ifndef __WORK_STATUS_HPP__
#define __WORK_STATUS_HPP__

#include <string>

namespace workflows {

enum WorkStatus {  // TODO: enum.item 调用
  INITIAL = 0,
  RUNNING = 1,
  FAILED = 2,
  COMPLETED = 3

};

std::string to_str(WorkStatus workStatus) {
  switch (workStatus) {
    case INITIAL: return std::string("INITIAL");
    case RUNNING: return std::string("RUNNING");
    case FAILED: return std::string("FAILED");
    case COMPLETED: return std::string("COMPLETED");
    default: return NULL;
  }
}
}  // namespace workflows

#endif  // __WORK_STATUS_HPP__
