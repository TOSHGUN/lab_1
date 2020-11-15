#ifndef LABA1_STACK_PAPER_H
#define LABA1_STACK_PAPER_H
#include <iostream>
#include "Paper_sheet.h"

template <typename T>
class Stack_paper {
public:
    Stack_paper(){
        count = 0;
    }; // конструктор по умолчанию
    Stack_paper(const Stack_paper& other){}; // конструктор копирования
    ~Stack_paper(){}; // деструктор
    void Add(); // метод добавления нового элемента
    void Delete(); // метод удаления элемента
    void Clear_all(); // метод удаления всех хранимых элементов
    int Size() const { // метод возвращающий число хранящихся объектов
        return count;
    };

private:
    int count; // количетсво записей
    //структура элемента стека
    struct Node{
        Node *prevElement; // указатель на предыдущий элемент стека
        T value;
        Node(){
        }
        Node(T val){
            value = val;
            prevElement = NULL;
        }
    };

    Node * topElement = new Node();
};

#endif //LABA1_STACK_PAPER_H
