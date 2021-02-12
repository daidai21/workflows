/* ****************************************************************************
 * File Name   : work_report_predicate.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 02:35:20 2021
 *************************************************************************** */

#include "./../utils/atomic_int.hpp"
#include "./work_report.hpp"

namespace workflows {
class TimesPredicate;

class WorkReportPredicate {
 public:
  bool apply(WorkReport* workReport);

 private:
  // TODO: 
  // WorkReportPredicate ALWAYS_TRUE = workReport->true;
  // WorkReportPredicate ALWAYS_FALSE = workReport->false;
  // WorkReportPredicate COMPLETED = workReport->workReport.getStatus().equals(WorkStatus.COMPLETED);
  // WorkReportPredicate FAILED = workReport->workReport.getStatus().equals(WorkStatus.FAILED);
};

namespace {

class TimesPredicate : public WorkReportPredicate {
 public:
  TimesPredicate() {
    this->counter_ = new AtomicInt();
  }

  TimesPredicate(int times) {
    TimesPredicate();
    this->times_ = times;
  }

 public:
  bool apply(WorkReport* workReport) {
    return this->counter_->inc_and_get() != this->times_;
  }

  static TimesPredicate* times(int times) {
    return new TimesPredicate(times);
  }

 private:
  int times_;
  AtomicInt* counter_;
};

}  // namespace
}  // namespace workflows
