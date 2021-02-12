/* ****************************************************************************
 * File Name   : repeat_workflow_example.cpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 01:44:30 2021
 *************************************************************************** */

#include <iostream>

#include "./src/workflows.hpp"

using namespace std;
using namespace workflows;

class PrintMessageWork : public Work {
 public:
  PrintMessageWork(std::string message) {
    this->message = message;
  }

  std::string get_name() {
    return "print message work";
  }

  WorkReport* execute(WorkContext* workContext) {
    std::cout << message << std::endl;
    return new DefaultWorkReport(COMPLETED, workContext);
  }

 private:
  std::string message;
};

int main(int argc, char* argv[]) {
  WorkFlow* workflow = new RepeatFlow("qwe", new PrintMessageWork("asd"), new WorkReportPredicate());
  return 0;
}
