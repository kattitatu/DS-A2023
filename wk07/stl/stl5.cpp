#include <iterator>
#include <vector>
#include <algorithm>

#include "test.hh"

using namespace std;


/**
 * @brief Arrange vector in three subsequent sections:
 *        - those divisible by three (asc order)
 *        - those whose reminder is 1 (asc order)
 *        - those whose reminder is 2 (asc order)
 * @param v vector to be sorted
 * @return int EXIT_SUCCESS if everything went OK, EXIT_FAILURE otherwise
 */
int sortMod3(std::vector<int>& v)
{
    //also the sections are sorted in ascending order
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), [](int i, int j){return i % 3 < j % 3;});
    return EXIT_SUCCESS;
}

