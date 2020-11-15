#pragma once
#include <iostream>
using  std::cin;
using  std::cout;

class Paper_sheet {
public:
    Paper_sheet(); // конструктор по умолчанию
    Paper_sheet(float width_, float length_, float height_, float x_, float y_); // конструктор инициализации
    Paper_sheet(const Paper_sheet& other); // конструктор копирования
    float Get_width() const {
        return width;
    };
    float Get_length() const {
        return length;
    };
    float Get_height() const{
        return height;
    };
    float Get_x() const{
        return x;
    };
    float Get_y() const{
        return y;
    }
private:
    float width, length, height, x, y;
};