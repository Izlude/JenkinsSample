#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/CompilerOutputter.h>

using namespace CPPUNIT_NS;

int main(int argc, char **argv) {
  /* テストコントローラの生成 */
  TestResult controller;
  TestResultCollector result;
  controller.addListener(&result);

  BriefTestProgressListener progress;
  controller.addListener(&progress);

  /* テストを追加して、テストの実行 */
  TestRunner runner;
  runner.addTest(TestFactoryRegistry::getRegistry().makeTest());
  runner.run(controller);

  CompilerOutputter outputter(&result, stdCOut());
  outputter.write();

  return result.wasSuccessful() ? 0 : 1;
}
