//
// Created by vladimir on 05.11.2019.
//

#ifndef LISTITERATOR_S_ITERATOR_H
#define LISTITERATOR_S_ITERATOR_H

template<class T>
struct node
{
    T data;			// Данные
    node<T>* next;	// Адрес следующего элемента списка
    node() : next(nullptr) {}
};

template<class T>
class s_iterator
{
private:
    node<T>* ptr;
public:
    s_iterator() : ptr(nullptr) {}
    explicit s_iterator(node<T>* ptr) : ptr(ptr) {}
    s_iterator& operator++() { ptr = ptr->next; return *this; }
    T& operator*() const { return ptr->data; }
    node<T>* operator->() { return ptr; }
    bool operator!=(const s_iterator& obj) const { return ptr != obj.ptr; }
    node<T>* GetPtr() { return ptr; }
    ~s_iterator() { ptr = nullptr; }
};


#endif //LISTITERATOR_S_ITERATOR_H
