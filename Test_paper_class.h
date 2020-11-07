
#ifndef LABA1_TEST_PAPER_CLASS_H
#define LABA1_TEST_PAPER_CLASS_H

#include <cassert>
#include "Paper_sheet.h"
#include <iostream>

void Test_paper_sheet(){
    Paper_sheet first;
    assert(first.Get_width() == 0);
    assert(first.Get_lendth() == 0);
    assert(first.Get_height() == 0);
    assert(first.Get_x() == 0);
    assert(first.Get_y() == 0);

    Paper_sheet second(20, 30, 40, 5, 4);
    assert(second.Get_width() == 20);
    assert(second.Get_lendth() == 30);
    assert(second.Get_height() == 40);
    assert(second.Get_x() == 5);
    assert(second.Get_y() == 4);

    Paper_sheet third(20, 30, 40, -5, 4);
    assert(third.Get_width() == 20);
    assert(third.Get_lendth() == 30);
    assert(third.Get_height() == 40);
    assert(third.Get_x() == -5);
    assert(third.Get_y() == 4);

    Paper_sheet fourth(20, 30, 40, 5, -4);
    assert(fourth.Get_width() == 20);
    assert(fourth.Get_lendth() == 30);
    assert(fourth.Get_height() == 40);
    assert(fourth.Get_x() == 5);
    assert(fourth.Get_y() == -4);

    Paper_sheet fifth(20, 30, 40, 5, 4);
    assert(fifth.Get_width() == 20);
    assert(fifth.Get_lendth() == 30);
    assert(fifth.Get_height() == 40);
    assert(fifth.Get_x() == 5);
    assert(fifth.Get_y() == 4);

    Paper_sheet sixth(20, 30, 40, -5, -4);
    assert(sixth.Get_width() == 20);
    assert(sixth.Get_lendth() == 30);
    assert(sixth.Get_height() == 40);
    assert(sixth.Get_x() == -5);
    assert(sixth.Get_y() == -4);

    Paper_sheet seventh(-20, 30, 40, 5, 4);
    assert(seventh.Get_width() == 0);
    assert(seventh.Get_lendth() == 30);
    assert(seventh.Get_height() == 40);
    assert(seventh.Get_x() == 5);
    assert(seventh.Get_y() == 4);

    Paper_sheet eighth(20, -30, 40, 5, 4);
    assert(eighth.Get_width() == 20);
    assert(eighth.Get_lendth() == 0);
    assert(eighth.Get_height() == 40);
    assert(eighth.Get_x() == 5);
    assert(eighth.Get_y() == 4);

    Paper_sheet ninth(20, 30, -40, 5, 4);
    assert(ninth.Get_width() == 20);
    assert(ninth.Get_lendth() == 30);
    assert(ninth.Get_height() == 0);
    assert(ninth.Get_x() == 5);
    assert(ninth.Get_y() == 4);

    Paper_sheet tenth(ninth);
    assert(tenth.Get_width() == ninth.Get_width());
    assert(tenth.Get_lendth() == ninth.Get_lendth());
    assert(tenth.Get_height() == ninth.Get_height());
    assert(tenth.Get_x() == ninth.Get_x());
    assert(tenth.Get_y() == ninth.Get_y());

    std::cout << "Test paper OK" << std::endl;
}

#endif //LABA1_TEST_PAPER_CLASS_H
