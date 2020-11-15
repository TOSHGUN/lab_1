#include "stack_paper.h"

void Stack_paper::Add(const Paper_sheet &val) { // метод добавления нового элемента
    auto new_node = new Node{val};
    new_node->next = top;
    top = new_node;
    count++;
}

void Stack_paper::Pop() { // метод удаления элемента
    if (top) {
        Node *new_top = top->next;
        delete top;
        top = new_top;
    }
    count--;
}

void Stack_paper::Clear_all() { // метод удаления всех хранимых элементов
    while (top) {
        auto next = top->next;
        delete top;
        top = next;
    }
    count = 0;
}

Stack_paper::Stack_paper(const Stack_paper &other) {
    this->count = other.count;
    this->top = other.top;
}

bool Stack_paper::CheckRavnovesie() const {
    auto node = top;
    while (node->next != nullptr) { // ищем самый нижний элемент в стеке
        node = node->next;
    }
    float max_x = node->value.Get_length() / 2;
    float max_y = node->value.Get_height() / 2;
    node = top;
    while (node != nullptr) {
        if (!(node->value.Get_y() > max_y || node->value.Get_x() > max_x)) {
            return false;
        }
        node = node->next;
    }
    return true;
}

Stack_paper::Node &Stack_paper::Node::operator=(Stack_paper::Node *other) {
    Node *current = this;
    Node *to_copy = other;
    while (to_copy != nullptr) {
        current->value = to_copy->value;
        current->next = nullptr;
        current = current->next;
        to_copy = to_copy->next;
    }
    return *this;
}
