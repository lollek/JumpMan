/*!
 * \file MovingStar.cc
 * \brief File containing the MovingStar class source code
 *
 * \author Olle Kvarnström
 * \date 2013
 * \copyright GNU Public License
 */
#include "MovingStar.h"

#include <chrono>
#include <random>

MovingStar::MovingStar(short y, int edge_coord) : BasicStar(y, edge_coord), dx_(0), dy_(0)
{
    std::default_random_engine gen(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> rand(-5, 5);

    this->dx_ = rand(gen);
    this->dy_ = rand(gen);

    this->filename_ = "moving_star";
}

MovingStar::~MovingStar() {}

void MovingStar::takeAction()
{
    this->x_ += this->dx_;
    this->y_ += this->dy_;
}
