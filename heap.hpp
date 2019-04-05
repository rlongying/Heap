//
// Created by Ivan on 2019-04-02.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP

#include <vector>
#include <ostream>
#include <algorithm>

template<class T>
class heap {

protected:
    std::vector<T> values;

    /**
     * heapify the heap from the index specified
     * @param index starting index
     */
    void heapify(){
        std::make_heap(values.begin(), values.end());
    };

public:
    heap() = default;
    heap(typename std::vector<T>::iterator first, typename std::vector<T>::iterator last){
        for (auto it = first; it != last; it++) {
            values.push_back(*it);
        }
        heapify();
    };

    /**
     * add new element to heap
     * @param value
     */
    void push(T value) {
        values.push_back(value);
        //maintain the heap
        std::push_heap(values.begin(), values.end());
    };

    /**
     * remove  and return the root
     * @return root value(max value)
     */
    T pop() {
        //move first to the last - 1, and maintain the heap
        std::pop_heap(values.begin(), values.end());
        //get the value of previous root
        T value = values.back();
        //remove the previous root
        values.pop_back();
        //return the previous root
        return value;
    };

    /**
     *
     * @return the size of the heap
     */
    size_t size() const { return values.size(); };

    /**
     *
     * @return true, if the heap is empty, otherwise, false
     */
    bool is_empty() const { return values.empty(); };

    /**
     * clear the heap, and make the size of the vector to be 0
     */
    void clear() { std::vector<T>().swap(values); };

    friend std::ostream &operator<<(std::ostream &os, const heap &h) {
        std::for_each(h.values.begin(), h.values.end(), [&os](const T &t) {
            os << t;
        });
        return os;
    }
};

#endif //HEAP_HEAP_HPP
