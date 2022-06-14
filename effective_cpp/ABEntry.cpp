//
// Created by JIESOUL on 2019/9/25.
//

#include "ABEntry.h"
ABEntry::ABEntry(const std::string &name, const std::string &address,
    const std::list <PhoneNumber> &phones)
    // 下面是初始化
    : theName(name), theAddress(address), thePhones(phones), numTimesConsulted(0)
{
//  这里是赋值
//  theName = name;
//  theAddress = address;
//  thePhones = phones;
//  numTimesConsulted = 0;
}
