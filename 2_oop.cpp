#include "List.h"
#include "DoublyLinkedList.h"

int main() {
    // Однозв'язний список
    List<int> list1;
    list1.PushBack(1);
    list1.PushBack(2);
    list1.PushBack(3);
    list1.Show();


    DoublyLinkedList<std::string> list2;
    list2.PushFront("stard");
    list2.PushBack("middle");
    list2.PushBack("end");
    list2.Show();

    return 0;
}