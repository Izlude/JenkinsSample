#include "FizzBuzz.h"
#include "gtest/gtest.h"

class FizzBuzzTest : public ::testing::Test {
 protected:

  FizzBuzzTest() {
    this->fb_ = new FizzBuzz();
  }

  virtual ~FizzBuzzTest() {
    delete this->fb_;
  }

  virtual void SetUp() {
  }

  virtual void TearDown() {
  }
  FizzBuzz* fb_;
};

TEST_F(FizzBuzzTest, testFizz) {
  EXPECT_EQ("Fizz", fb_->Print(3));
}

TEST_F(FizzBuzzTest, testBuzz) {
  EXPECT_EQ("Buzz", fb_->Print(5));
}

TEST_F(FizzBuzzTest, testFizzBuzz) {
  EXPECT_EQ("FizzBuzz", fb_->Print(15));
}

TEST_F(FizzBuzzTest, testOther) {
  EXPECT_EQ("2", fb_->Print(2));
}
