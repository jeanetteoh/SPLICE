#include "gtest/gtest.h"
#include "../menu_composite/composite/menu_taco/tests/menu_tacobell_tests.hpp"
#include "../menu_composite/composite/menu_taco/tests/menu_deltaco_tests.hpp"
#include "../menu_composite/composite/menu_taco/tests/menu_elpolloloco_tests.hpp"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
