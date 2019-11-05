//
// Created by vladimir on 05.11.2019.
//

#ifndef LISTITERATOR_S_LIST_H
#define LISTITERATOR_S_LIST_H

#include <ctime>
#include <iostream>
#include "s_iterator.h"
using namespace std;


template<class T>
class s_list {
private:
    node<T>* first;									// адрес первого элемента списка
    node<T>* last;									// адрес последнего элемента списка
public:
    friend class s_iterator<T>;						// включение класса итератора
    s_list()                                        // конструктор по умолчанию
    {
        first = nullptr;
        last = nullptr;
    }
    s_list(const s_list<T>& obj)				// конструктор копирования
    {
        if (obj.first) {
            for (s_iterator<T> iter = obj.begin(); iter != obj.end(); ++iter) {
                auto *val = new node<T>;
                val->data = *iter;
                if (!first) {
                    first = val;
                    last = val;
                } else {
                    last->next = val;
                    last = val;
                }
            }
        }
    }

    s_list(s_list<T>&& obj) noexcept					// конструктор перемещения
    {
        if (obj.first) {
            first = obj.first;
            last = obj.last;
            obj.first = nullptr;
            obj.last = nullptr;
        }
    }

    s_list<T>& operator=(const s_list<T>& obj)		// оператор равно копированием
    {
        if (first)
            delete_all();
        if (!obj.first)
            return *this;
        for (s_iterator<T> iter = obj.begin(); iter != obj.end(); ++iter) {
            auto *val = new node<T>;
            val->data = *iter;
            if (!first) {
                first = val;
                last = val;
            }
            else {
                last->next = val;
                last = val;
            }
        }
        return *this;
    }

    s_list<T>& operator=(s_list<T>&& obj) noexcept			// оператор равно перемещением
    {
        if (first)
            delete_all();
        if (!obj.first)
            return *this;
        first = obj.first;
        last = obj.last;
        obj.first = nullptr;
        obj.last = nullptr;
        return *this;
    }

    T& operator[](size_t pos) const				// оператор индексирования
    {
        int i = 0;
        for(s_iterator<T> iter = begin(); iter != end(); ++iter) {
            if (i == pos) {
                return *iter;
            }
            i++;
        }
    }

    void add_to_head(const T& data)				// добавление элемента в начало
    {
        node<T> *value = new node<T>;
        if (!first) {
            value->data = data;
            value->next = nullptr;
            first = value;
            last = value;
        }
        else {
            value->data = data;
            value->next = first;
            first = value;
        }
    }

    void add_to_tail(const T& data)				// добавление элемента в конец
    {
        if (!first) {
            auto *value = new node<T>;
            value->data = data;
            value->next = nullptr;
            first = value;
            last = value;
        }
        else {
            auto *value = new node<T>;
            value->data = data;
            value->next = nullptr;
            last->next = value;
            last = value;
        }
    }

    T front() const								// возвращает первое значение
    {
        if (first != nullptr)
            return first->data;
    }

    T back() const									// возвращает последнее значение
    {
        return last->data;
    }


    T delete_from_head()                            // удаление первого элемента
    {
        if (!first)
            return NULL;
        T val = first->data;
        auto *p = first;
        first = first->next;
        delete p;
        if (!first)
            last = nullptr;
        return val;
    }


    T delete_from_tail()							// удаление последнего элемента
    {
        if (first) {
            if (first->next == nullptr) {
                T val = first->data;
                delete_all();
                return val;
            }
            else {
                for (s_iterator<T> iter = begin(); iter != end(); ++iter){
                    if (iter->next->next == nullptr) {
                        T val = iter->next->data;
                        last = iter.GetPtr();
                        last->next = nullptr;
                        delete iter->next;
                        return val;
                    }
                }
            }
        }
    }

    void delete_all()                               // удаление всех элементов
    {
        while (first)
        {
            node<T> *val = first;
            first = first->next;
            delete val;
        }
        last = nullptr;
    }

    void show() const								// отображение всех элементов
    {
        if (first) {
            size_t i = 0;
            for (s_iterator<T> iter = begin(); iter != end(); ++iter) {
                cout << "[" << i++ << "] = " << *iter << ", ";
            }
        }
        else {
            cout << "List is empty.";
        }
        cout << endl;
    }

    size_t size() const							// количество элементов
    {
        size_t size = 0;
        if (first) {
            for (s_iterator<T> iter = begin(); iter != end(); ++iter) {
                size++;
            }
        }
        return size;
    }

    s_iterator<T> begin() const					// возвращает итератор на первый элемент
    {
        if (!first)
            return s_iterator<T> ();
        s_iterator<T> iter(first);
        return iter;
    }

    s_iterator<T> end() const						// возвращает итератор на элемент, следующий за последним
    {
        if (!first)
            return s_iterator<T> ();
        s_iterator<T> iter(last);
        return ++iter;
    }


    void insert_at(size_t pos, const T& data)		// вставка в указанную позицию
    {
        if (pos <= size()) {
            if (pos == 0) {
                add_to_head(data);
            }
            else if (pos == size()) {
                add_to_tail(data);
            }
            else {
                int i = 0;
                for (s_iterator<T> iter = begin(); iter != end(); ++iter) {
                    if (i == pos - 1) {
                        auto *value = new node<T>;
                        value->data = data;
                        value->next = iter->next;
                        iter->next = value;
                        break;
                    }
                    i++;
                }
            }
        }
    }

    void delete_at(size_t pos)						// удаление по указанной позиции
    {
        if (pos < size()) {
            if (pos == 0) {
                delete_from_head();
            }
            else if (pos == size() - 1) {
                delete_from_tail();
            }
            else {
                int i = 0;
                for (s_iterator<T> iter = begin(); iter != end(); ++iter) {
                    if (i == pos - 1) {
                        node<T> *value = iter->next;
                        iter->next = iter->next->next;
                        delete value;
                        break;
                    }
                    i++;
                }
            }
        }
    }

    size_t find(const T& data) const				// поиск элемента (NULL в случае неудачи)
    {
        size_t i = 0;
        for(s_iterator<T> iter = begin(); iter != end(); ++iter) {
            if (*iter == data) {
                return i;
            }
            i++;
        }
        return NULL;
    }

    size_t find_and_replace(const T& data, const T& repl_data)	// поиск и замена всех элементов (возвращаем кол-во замен)
    {
        int i = 0;
        for(s_iterator<T> iter = begin(); iter != end(); ++iter) {
            if (*iter == data) {
                *iter = repl_data;
                i++;
            }
        }
        return i;
    }

    void reverse()									// переворот списка
    {
        if (typeid(T) == typeid(int) ||
            typeid(T) == typeid(float) ||
            typeid(T) == typeid(double) ||
            typeid(T) == typeid(unsigned long int) ||
            typeid(T) == typeid(long int) ||
            typeid(T) == typeid(unsigned int) ||
            typeid(T) == typeid(unsigned short int) ||
            typeid(T) == typeid(short int) ||
            typeid(T) == typeid(long long)) {
            if (first) {
                size_t count = size();
                T *arr = new T[count];
                int k = 0;
                for (s_iterator<T> iter = begin(); iter != end(); ++iter) {
                    arr[k] = *iter;
                    k++;
                }
                delete_all();
                T x;
                for (size_t i = 0; i < count - i - 1; i++) {
                    x = arr[i];
                    arr[i] = arr[count - i - 1];
                    arr[count - i - 1] = x;
                }
                for (size_t i = 0; i < count; ++i) {
                    add_to_tail(arr[i]);
                }
                delete[] arr;
                arr = nullptr;
            }
        }
    }

    void sort()									// сортирует элементы (вставками)
    {
        if (typeid(T) == typeid(int) ||
            typeid(T) == typeid(float) ||
            typeid(T) == typeid(double) ||
            typeid(T) == typeid(unsigned long int) ||
            typeid(T) == typeid(long int) ||
            typeid(T) == typeid(unsigned int) ||
            typeid(T) == typeid(unsigned short int) ||
            typeid(T) == typeid(short int) ||
            typeid(T) == typeid(long long))
        {
            if (first) {
                size_t count = size();
                T *arr = new T[count];
                int k = 0;
                for (s_iterator<T> iter = begin(); iter != end(); ++iter) {
                    arr[k] = *iter;
                    k++;
                }
                delete_all();
                for (size_t i = 1; i < count; i++) {
                    T max;
                    for (size_t j = i; j > 0; j--) {
                        if (arr[j] < arr[j - 1]) {
                            max = arr[j];
                            arr[j] = arr[j - 1];
                            arr[j - 1] = max;
                        }
                    }
                }
                for (size_t i = 0; i < count; ++i) {
                    add_to_tail(arr[i]);
                }
                delete[] arr;
                arr = nullptr;
            }
        }
    }

    void splice(s_list<T>& obj)					// перемещает элементы из другого list
    {
        if (!first) {
            first = obj.first;
            last = obj.last;
            obj.first = nullptr;
            obj.last = nullptr;
        }
        else if (!obj.first) {}
        else {
            last->next = obj.first;
            last = obj.last;
            obj.first = nullptr;
            obj.last = nullptr;
        }
    }

    ~s_list()									// деструктор
    {
        delete_all();
    }
};


#endif //LISTITERATOR_S_LIST_H
