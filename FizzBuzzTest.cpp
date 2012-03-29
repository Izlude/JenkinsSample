#include "FizzBuzz.h"
#include <cppunit/extensions/HelperMacros.h>

using namespace CPPUNIT_NS;

class FizzBuzzTest : public TestFixture {
  CPPUNIT_TEST_SUITE( FizzBuzzTest );
  
  /* ここから、テストケースを設定 */
  CPPUNIT_TEST( testFizz );
  CPPUNIT_TEST( testBuzz );
  CPPUNIT_TEST( testFizzBuzz );
  CPPUNIT_TEST( testOther );
  /* ここまで */
  
  CPPUNIT_TEST_SUITE_END();

  FizzBuzz* fb_;
  void testFizz();
  void testBuzz();
  void testFizzBuzz();
  void testOther();
    public:
  FizzBuzzTest(){
    this->fb_ = new FizzBuzz();
  }
  ~FizzBuzzTest(){
    delete this->fb_;
  }
//public:
  void setUp() {
    //this->fb_ = new FizzBuzz();
  }
  void tearDown() {
    //delete this->fb_;
  }
};

/* ここから、テストケースを記述 */
void FizzBuzzTest::testFizz()
{
    const std::string s = "Fizz";
    CPPUNIT_ASSERT_EQUAL(s, fb_->Print(3));
}

void FizzBuzzTest::testBuzz()
{
    const std::string s = "Buzz";
    CPPUNIT_ASSERT_EQUAL(s, fb_->Print(5));
}

void FizzBuzzTest::testFizzBuzz()
{
    const std::string s = "FizzBuzz";
    CPPUNIT_ASSERT_EQUAL(s, fb_->Print(15));
}

void FizzBuzzTest::testOther()
{
    const std::string s = "2";
    CPPUNIT_ASSERT_EQUAL(s, fb_->Print(2));
}
/* ここまで、テストケースの記述 */

CPPUNIT_TEST_SUITE_REGISTRATION(FizzBuzzTest);
