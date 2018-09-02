//
// Created by elmot on 1.9.2018.
//

#include "../Inc/cppest.h"

RED RED;
GREEN GREEN;
BLUE BLUE;
ORANGE ORANGE;

extern "C" void doSomething(void);

LED *leds[] = {&RED, &BLUE, &GREEN, &ORANGE};

void doSomething() {
    RED.turnOn();
    GREEN.turnOn();
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
    while (true) {
        for (auto &led : leds) {
            led->toggle();
        }
        HAL_Delay(500);
    }
#pragma clang diagnostic pop
}

void RED::turnOn() {
    HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LD10_GPIO_Port, LD10_Pin, GPIO_PIN_SET);
}

void GREEN::turnOn() {
    HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LD7_GPIO_Port, LD7_Pin, GPIO_PIN_SET);
}

void BLUE::turnOn() {
    HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LD9_GPIO_Port, LD9_Pin, GPIO_PIN_SET);
}

void ORANGE::turnOn() {
    HAL_GPIO_WritePin(LD8_GPIO_Port, LD8_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, GPIO_PIN_SET);
}
void RED::toggle() {
    HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
    HAL_GPIO_TogglePin(LD10_GPIO_Port, LD10_Pin);
}

void BLUE::toggle() {
    HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
    HAL_GPIO_TogglePin(LD9_GPIO_Port, LD9_Pin);
}

void GREEN::toggle() {
    HAL_GPIO_TogglePin(LD6_GPIO_Port, LD6_Pin);
    HAL_GPIO_TogglePin(LD7_GPIO_Port, LD7_Pin);
}

void ORANGE::toggle() {
    HAL_GPIO_TogglePin(LD8_GPIO_Port, LD8_Pin);
    HAL_GPIO_TogglePin(LD5_GPIO_Port, LD5_Pin);
}