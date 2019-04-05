
//
// Created by Ivan on 2019-04-05.
//

#ifndef HEAP_PATIENT_HPP
#define HEAP_PATIENT_HPP

#include <string>
#include <utility>

class patient {
private:
    int severity;
    std::string name;

public:
    patient(int severity, std::string name) : severity(severity), name(std::move(name)){}

    friend bool operator < (const patient& lhs, const patient& rhs){
        return lhs.severity < rhs.severity;
    }

    friend bool operator > (const patient& lhs, const patient& rhs){
        return rhs < lhs;
    }

    friend bool operator <= (const patient& lhs, const patient& rhs){
        return !(lhs > rhs);
    }

    friend bool operator >= (const patient& lhs, const patient& rhs){
        return !(lhs < rhs);
    }

    friend bool operator == (const patient& lhs, const patient& rhs){
        return lhs.severity == rhs.severity;
    }

    friend bool operator != (const patient& lhs, const patient& rhs){
        return !(lhs == rhs);
    }

    friend std::ostream& operator<< (std::ostream & os, const patient& p);

};


#endif //HEAP_PATIENT_HPP
