#include <include/job_base.h>
#include <gtest/gtest.h>

class TestProcessTime : public testing::Test{
public:
    ProcessTime *pt_ptr;
public:
    void SetUp () override;
    void TearDown() override;

    unsigned int testMachineNo(unsigned int case1);

};

void TestProcessTime::SetUp(){
    pt_ptr = new ProcessTime(1, 5.0);
}

void TestProcessTime::TearDown(){
    delete pt_ptr;
}

unsigned int TestProcessTime::testMachineNo(unsigned int case1){
    return pt_ptr->machine_no;
}

TEST_F(TestProcessTime, test_process_time_constructor){
    EXPECT_EQ(this->testMachineNo(1), 2);

}