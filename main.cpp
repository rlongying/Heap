#include <iostream>
#include "patient_list.hpp"

int main() {
    patient_list &list1 = patient_list::get_patient_list();

    list1.push(patient(10, "Tom"));
    list1.push(patient(12, "Cse"));
    list1.push(patient(13, "Bee"));
    list1.push(patient(9, "Don"));
    list1.push(patient(21, "Cool"));
    list1.push(patient(8, "Aee"));


    std::cout << "list1: " << std::endl;
    std::cout << list1 << std::endl;
    std::cout << "removing... " << list1.pop() << std::endl;

    std::cout << "list1: " << std::endl;
    std::cout << list1 << std::endl;

    std::cout << "removing... " << list1.pop() << std::endl;

    std::cout << "list1: " << std::endl;
    std::cout << list1 << std::endl;


    patient_list &list2 = patient_list::get_patient_list();

    std::cout << "add to list2... name: acd, severity:100" << std::endl;
    list2.push(patient(100, "acd"));
    std::cout << "list2: \n" << list2 << "\n";
    std::cout << "list1: \n" << list1 << "\n";

    std::cout << "before clearing...\n";
    std::cout << "Is list1 empty: " << std::boolalpha << list1.is_empty() << "\n";
    std::cout << "Is list2 empty: " << std::boolalpha << list2.is_empty() << "\n";
    list1.clear();

    std::cout << "after clearing...\n";
    std::cout << "Is list1 empty: " << std::boolalpha << list1.is_empty() << "\n";
    std::cout << "Is list2 empty: " << std::boolalpha << list2.is_empty() << "\n";

    return 0;
}