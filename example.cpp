#include <gtest/gtest.h>

class QueueTest : public ::testing::Test {
 protected:
  void SetUp() override {
    std::cout << "SetIp()" <<std::endl;
  }

  QueueTest(){
    std::cout << "constructor" <<std::endl;
  }


};

TEST_F(QueueTest, IsEmptyInitially) {
  EXPECT_EQ(0, 0);
}

TEST_F(QueueTest, DequeueWorks) {
  EXPECT_EQ(0, 1);
}


