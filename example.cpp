#include <gtest/gtest.h>
#include <iostream>

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
  EXPECT_EQ(0, 0);
}

TEST_F(QueueTest, Testing) {
  EXPECT_EQ(0, 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


