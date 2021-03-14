/* ****************************************************************************
 * File Name   : repeat_workflow.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:27:19 2021
 *************************************************************************** */

#ifndef __REPEAT_WORKFLOW_HPP__
#define __REPEAT_WORKFLOW_HPP__

#include "./../work/no_op_work.hpp"
#include "./../work/work_report_predicate.hpp"
#include "./abstract_workflow.hpp"

namespace workflows {

class RepeatFlow;

class RepeatFlow : public AbstractWorkFlow {
 public:
  RepeatFlow(std::string name, Work* work, WorkReportPredicate* predicate) : AbstractWorkFlow(name) {
    // AbstractWorkFlow(name); // C++ 调用父类的构造函数或者方法
    this->work = work;
    this->predicate = predicate;
  }

 public:
  WorkReport* execute(WorkContext* workContext) {
    WorkReport* workReport;
    do {
      workReport = this->work->execute(workContext);
    } while (this->predicate->apply(workReport));
    return workReport;
  }

 private:
  Work* work;
  WorkReportPredicate* predicate;

 private:
  class Builder {
   public:
    class UntilStep;
    class BuildStep;
    class RepeatStep {
      UntilStep* repeat(Work work);
    };

    class NameStep : public RepeatStep {
     public:
      RepeatStep* named(std::string name);
    };

    class UntilStep {
      BuildStep* until(WorkReportPredicate predicate);
      BuildStep* times(int times);
    };

    class BuildStep {
     public:
      RepeatFlow* build();
    };

   public:
    static NameStep* new_repeat_flow();

   private:
    Builder() {}

   private:
    class BuildSteps : public NameStep, public RepeatStep, public UntilStep, public BuildStep {
     public:
      BuildSteps() {
        this->name = random_UUID();
        this->work = new NoOpWork();
        // this->predicate = ALWAYS_FALSE;  // TODO
      }

     public:
      RepeatStep* named(std::string name) {
      }

      UntilStep* repeat(Work* work) {
      }

      BuildStep* until(WorkReportPredicate* predicate) {
      }

      BuildStep* times(int times) {
      }

      RepeatFlow* build() {
      }

     private:
      std::string name;
      Work* work;
      WorkReportPredicate* predicate;
    };
  };
};

}  // namespace workflows

#endif  // __REPEAT_WORKFLOW_HPP__
