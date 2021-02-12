/* ****************************************************************************
 * File Name   : workflow.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:25:03 2021
 *************************************************************************** */

#ifndef __WORKFLOW_HPP__
#define __WORKFLOW_HPP__

#include "./../work/work_report.hpp"

namespace workflows {

class WorkFlow {
 public:
  WorkReport* call() {
    return new WorkReport();
  }
};

}  // namespace workflows

#endif  // __WORKFLOW_HPP__
