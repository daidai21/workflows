/* ****************************************************************************
 * File Name   : sequential_workflow.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:27:24 2021
 *************************************************************************** */

#ifndef __SEQUENTIAL_WORKFLOW_HPP__
#define __SEQUENTIAL_WORKFLOW_HPP__

#include "./abstract_workflow.hpp"
#include "./../work/work.hpp"
#include "./../work/work_report.hpp"
#include <string>


namespace workflows {

class SequentialFlow : AbstractWorkFlow {
 private:
  SequentialFlow(std::string name) {
    AbstractWorkFlow(name);
  }

  WorkReport* execute(WorkContext* workContext) {
    WorkReport workReport = NULL;
    for (Work& work : works) {
      workReport = work.execute(workContext);
      if (workReport != null && workReport.getStatus() == false) {
        // log
        break;
      }
    }
    return workReport;
  }

 private:
  std::vector<Work> works;

 public:
  static class Builder {
    
  };

};


}  // namespace workflows

#endif  // __SEQUENTIAL_WORKFLOW_HPP__
