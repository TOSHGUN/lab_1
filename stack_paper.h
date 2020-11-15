#include "Paper_sheet.h"

class Stack_paper {
public:
    Stack_paper() = default;// конструктор по умолчанию
    Stack_paper(const Stack_paper& other); // конструктор копирования
    ~Stack_paper() = default;; // деструктор

    void Add(const Paper_sheet &val); // метод добавления нового элемента
    void Pop(); // метод удаления элемента
    void Clear_all(); // метод удаления всех хранимых элементов

    int Size() const { // метод возвращающий число хранящихся объектов
        return count; }

    bool CheckRavnovesie() const;

private:
    int count = 0; // количетсво записей
    //структура элемента стека
    struct Node {
        Paper_sheet value;
        Node *next = nullptr;
        Node& operator=(Node *other);
    };
    Node *top = nullptr; // последний элемент в стеке, изначально nullptr
};
