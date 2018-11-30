//
// Created by elmot on 1.9.2018.
//

#ifndef F3_CPP_CPPEST_H
#define F3_CPP_CPPEST_H

extern "C" {
#include "main.h"
#include "i2c.h"
#include "spi.h"
#include "usb.h"
#include "gpio.h"


}

class LED {

public:
    virtual void turnOn() = 0;


    virtual void toggle()= 0;

};

class RED : public LED {
public:
    void turnOn() override;

    void toggle() override;

};

class GREEN : public LED {
public:
    void turnOn() override;

    void toggle() override;

};

class ORANGE : public LED {
public:
    void turnOn() override;

    void toggle() override;

};

class BLUE : public LED {
public:
    void turnOn() override;

    void toggle() override;

};

#endif //F3_CPP_CPPEST_H
