#include <Arduino.h>

int passwordStep = 0; 

void setup() {
    Serial.begin(115200); 
    delay(1000);
    Serial.println("--- 密码箱系统已就绪 ---");
    Serial.println("请输入第一局密码:");
}

void loop() {
    if (Serial.available() > 0) {
        
        String input = Serial.readStringUntil('\n');
        
        input.trim(); 
        
        if (input.length() == 0) {
            return; 
        }   

        if (passwordStep == 0) {
            if (input == "AA") {
                passwordStep = 1; 
                Serial.println("第一局密码正确，请输入第二局密码:");
            } else {
                Serial.println("密码错误");
                passwordStep = 0; 
            }
        } 
        else if (passwordStep == 1) {
            if (input == "BB") {
                passwordStep = 2;
                Serial.println("第二局密码正确，请输入第三局密码:");
            } else {
                Serial.println("密码错误");
                passwordStep = 0;
            }
        } 
        else if (passwordStep == 2) {
            if (input == "CC") {
                passwordStep = 3;
                Serial.println("第三局密码正确，请输入第四局密码:");
            } else {
                Serial.println("密码错误");
                passwordStep = 0;
            }
        } 
        else if (passwordStep == 3) {
            if (input == "DD") {
                Serial.println("密码正确");
                Serial.println("成功解锁");
                
                passwordStep = 0; 
                Serial.println("\n--- 密码箱已重新上锁 ---");
                Serial.println("请输入第一局密码:");
            } else {
                Serial.println("密码错误");
                passwordStep = 0;
            }
        }
    }
}