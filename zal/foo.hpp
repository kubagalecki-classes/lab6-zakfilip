#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    
    std::for_each(people.cbegin(), people.cend(), [&](Human& h) { h.birthday(); });
    std::transform(people.cbegin(), people.cend(), ret_v.rbegin(), [&](const Human& h) {return h.isMonster() ? 'n' : 'y';});

    return ret_v;
}
