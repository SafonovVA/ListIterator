#include <iostream>
#include "s_list.h"

using namespace std;


int main() {
    srand(time(0));

    s_list<int> second;
    int size = rand() % 20;
    for (size_t i = 0; i < size; i++)
        second.add_to_head(rand() % 10);
    second.show();

    s_list<int> first;
    size = rand() % 20;
    for (size_t i = 0; i < size; i++)
        first.add_to_head(rand() % 10);
    first.show();

    first.delete_from_head();
    first.delete_from_tail();
    first.show();



    second.add_to_tail(rand() % 10);
    second.show();

    s_list<int> third;
    //s_list<int> third(second);
    third.show();

    s_list<int> fourth;
    fourth = first;
    fourth.show();

    first.sort();
    first.show();

    first.reverse();
    cout << "----------------\n";
    first.show();

    size = fourth.size();
    for (int i = 0; i < size; i++) {
    	int value = fourth[i];
    	cout << value << " ";
    }
    cout << endl;

    first.delete_at(3);
    first.show();

    first.insert_at(4, 4);
    first.show();

    first.delete_all();
    first.show();

    first.splice(third);
    first.show();
    first.splice(fourth);
    first.show();

    size_t result = first.find(10);
    if (result != 0)
    	cout << "The number ten is in position: " << result << endl;
    else
    	cout << "Numbers ten not found" << endl;

    first.find_and_replace(10, 1000);

    for (auto it = first.begin(); it != first.end(); ++it)
    	cout << *it << " ";

    return 0;
}