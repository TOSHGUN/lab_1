#include "Paper_sheet.h"

Paper_sheet::Paper_sheet(): // конструктор по умолчанию
    width(0),
    length(0),
    height(0),
    x(0),
    y(0)
{}

Paper_sheet::Paper_sheet(float width_, float length_, float height_, float x_, float y_): // конструктор инициализации
        x(x_),
        y(y_)
{
    if (width_ < 0)
        width = 0;
    else width = width_;
    if (length_ < 0)
        length = 0;
    else length = length_;
    if (height_ < 0)
        height = 0;
    else height = height_;

}

Paper_sheet::Paper_sheet(const Paper_sheet& other): // конструктор копирования
        width(other.width),
        length(other.length),
        height(other.height),
        x(other.x),
        y(other.y)
{}