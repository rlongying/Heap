//
// Created by Ivan on 2019-04-05.
//

#ifndef HEAP_PATIENT_LIST_HPP
#define HEAP_PATIENT_LIST_HPP


#include "heap.hpp"
#include "patient.hpp"

class patient_list : public heap<patient> {

private:
    patient_list() = default;

public:
    /**
     * get a instance of patient list
     * @return
     */
    static patient_list& get_patient_list() {
        static patient_list list;
        return list;
    }

    //disable copy constructor and assignment operator
    patient_list(const patient_list&) = delete;
    void operator= (patient_list&) = delete;

};


#endif //HEAP_PATIENT_LIST_HPP
