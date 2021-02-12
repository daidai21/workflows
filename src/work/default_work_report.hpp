/* ****************************************************************************
 * File Name   : default_work_report.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 02:09:59 2021
 *************************************************************************** */

#ifndef __DEFAULT_WORK_REPORT_HPP__
#define __DEFAULT_WORK_REPORT_HPP__


#include <exception>

#include "./work_report.hpp"
#include "./work_context.hpp"
#include "./../config/work_status.hpp"

namespace workflows {

class DefaultWorkReport : public WorkReport {
 public:
  DefaultWorkReport(WorkStatus workStatus, WorkContext* workContext) {
    this->status = workStatus;
    this->context = workContext;
  }

  DefaultWorkReport(WorkStatus workStatus, WorkContext* workContext, std::exception error) {
    DefaultWorkReport(workStatus, workContext);
    this->error = error;
  }

 public:
  WorkStatus get_status();

  WorkContext* get_context();

  std::exception get_error();

  std::string to_string();

 private:
  WorkStatus status;
  WorkContext* context;
  std::exception error;
};

}  //namespace workflows
#endif  // __DEFAULT_WORK_REPORT_HPP__
