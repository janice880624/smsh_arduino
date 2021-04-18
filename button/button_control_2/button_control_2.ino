//
//  Arduino Starter Kit projects
//
//  Created by Claudio Carnino
//  Modified by Josh Chang
//  Copyright © 2021 Futurenest. All rights reserved.
//

// [A] 初始化變數
// Pin 對應 Id，enum 用來定義常數。
enum PinId {
    PinIdRedLed1st = 5,
    PinIdRedLed2nd = 4,
    PinIdGreenLed = 3,
    PinIdSwitch = 2,
};

// 閃爍的延遲時間
int const BlinkDelayMilliseconds = 250;

// 開關初始狀態
int switchState = LOW;

// [B] 設定：程式開始執行時，僅執行一次的函式
void setup() {
    pinMode(PinIdRedLed1st, OUTPUT);
    pinMode(PinIdRedLed2nd, OUTPUT);
    pinMode(PinIdGreenLed, OUTPUT);
    pinMode(PinIdSwitch, INPUT);
}

// [C] 循環：會持續被執行的函式
void loop() {
		// (1)
    switchState = digitalRead(PinIdSwitch);

    if (switchState == LOW) {
        // (2) 點亮綠色 LED
        digitalWrite(PinIdGreenLed, HIGH);
        digitalWrite(PinIdRedLed1st, LOW);
        digitalWrite(PinIdRedLed2nd, LOW);
    } else {
				// (3)
        // a. 關閉綠色 LED
        digitalWrite(PinIdGreenLed, LOW);

        // b. 兩個紅色 LED 交替閃爍
        digitalWrite(PinIdRedLed1st, HIGH);
        digitalWrite(PinIdRedLed2nd, LOW);
        delay(BlinkDelayMilliseconds);

        digitalWrite(PinIdRedLed1st, LOW);
        digitalWrite(PinIdRedLed2nd, HIGH);
        delay(BlinkDelayMilliseconds);
    }
}
