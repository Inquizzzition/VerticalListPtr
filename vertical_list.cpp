//
// Created by Inquisition on 12.04.2023.
//

#include "vertical_list.h"


vertical_list::vertical_list():
    size(0),
    first(nullptr),
    last(nullptr)
{}

bool vertical_list::is_empty() {
    return first == nullptr;
}

void vertical_list::push_back(std::string &val) {
    node* point = new node(val);
    size++;
    if(this->is_empty()){
        this->first = point;
        this->last = point;
        return;
    }
    this->last->next = point;
    this->last = point;

}

void vertical_list::print() {
    if(is_empty())
        std::cout << "NULL";
    node* it = this->first;
    while (it != nullptr){
        std::cout << it->val << ' ';
        it = it->next;
    }
    std::cout << "\n";
}

void vertical_list::pop_first() {
    if(this->is_empty())
        return;
    node* point = this->first;
    this->first = this->first->next;
    point->next = nullptr;
    free(point);
    size--;
}

void vertical_list::pop_back() {
    if(this->is_empty())
        return;
    node* it = this->first;
    while(it->next != this->last)
        it = it->next;
    it->next = nullptr;
    free(this->last);
    this->last = it;
    size--;
}

void vertical_list::clear() {
    while(!this->is_empty())
        pop_first();
}

size_t vertical_list::get_size() {
    return this->size;
}

node* vertical_list::operator[](const size_t index) {
    if(!(index >= 0 && index < size))
        return nullptr;
    node* it = this->first;
    for(size_t i = 0; i < index; i++){
        it = it->next;
    }
    return it;
}


