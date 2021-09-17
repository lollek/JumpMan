/*!
 * \file Sprite.cc
 * \brief File containing the Sprite class source
 *
 * \author Olle Kvarnström
 * \date 2013
 * \copyright GNU Public License
 */

#include "Sprite.h"


Sprite::Sprite(const std::string &filename, short x, short y, unsigned short width, unsigned short height, short num_images)
    : current_image_(0), num_images_(num_images), x_(x), y_(y), initial_y_(y_), width_(width), height_(height),
      filename_(filename)
{}

Sprite::~Sprite() {}

const std::string &Sprite::filename() const { return this->filename_; }

short Sprite::x() const { return this->x_; }

short Sprite::y() const { return this->y_; }

unsigned short Sprite::width() const { return this->width_; }

unsigned short Sprite::height() const { return this->height_; }

short Sprite::imageX()
{
    if (this->num_images_ > 1)
        return (++this->current_image_ % this->num_images_) * this->width_;
    else
        return 0;
}

short Sprite::initialY() const { return this->initial_y_; }

void Sprite::modifyY(int mod)
{
    this->y_ += mod;
    this->initial_y_ += mod;
}
