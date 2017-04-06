/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.h
 * Author: eddy
 *
 * Created on February 21, 2017, 10:01 PM
 */

#ifndef DEMO_H
#define DEMO_H

template<typename T1>
class demo {
public:
    demo(const T1& m_Input);
    demo(const demo& orig);
    virtual ~demo();
    T1 do_something(void);
private:
    T1 m_T1;

};

//template<typename T1> using D = demo<T1>;

template<typename T1>
demo<T1>::demo(const T1& m_Input) {
    this->m_T1 = m_Input;
}

template<typename T1>
demo<T1>::demo(const demo& orig) {
}

template<typename T1>
demo<T1>::~demo() {
}

template<typename T1>
T1 demo<T1>::do_something(void)
{
    return this->m_T1 * 2;
}

#endif /* DEMO_H */

