
#include "../src/microtest/microtest.h"
#include "microtest/microtest.h"

TEST(ThrowTest) {
    ASSERT_THROW(throw std::exception());
}

TEST_MAIN()
