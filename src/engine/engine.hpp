/* ****************************************************************************
 * File Name   : engine.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:23:05 2021
 *************************************************************************** */

#ifndef __ENGINE_HPP__
#define __ENGINE_HPP__

#include "./../work/work_report.hpp"
#include "./../workflow/workflow.hpp"

namespace workflows {

class WorkFlowEngine {
 public:
  WorkFlowEngine();
  ~WorkFlowEngine();

  WorkReport* run(WorkFlow* workflow) {
    return workflow->call();
  }

  static WorkFlowEngine* new_workflowengine() {
    return new WorkFlowEngine();
  }
};

}  // namespace workflows

#endif  // __ENGINE_HPP__
