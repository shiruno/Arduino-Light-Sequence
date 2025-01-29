## Breadboard Diagram
![image](https://github.com/user-attachments/assets/b53d4194-ec74-4cd0-8220-963a333cef1c)

1. Variable Declaration
   - variable `timer` is declared and initialized to 1000 milliseconds (1 second). However, this variable is not used in the code.
3. Setup Function
   - The `setup()` function is called once when the program starts. It configures the specified pins (6, 7, 8, 9, and 10) as output pins using the `pinMode()` function. This means that these pins will be used to send signals (HIGH or LOW) to connected devices (like LEDs).
5. Loop Function
   - The `loop()` function runs continuously after the `setup()` function. It contains a sequence of commands that control the output pins:
   - Each `digitalWrite(pin, HIGH)` command turns on the corresponding pin (sending a HIGH signal).
   - After each pin is turned on, the program waits for 1 second (`delay(1000)`).
   - After all pins have been turned on, the program then turns them off in the same order using digitalWrite(pin, LOW), again waiting for 1 second after each command.

The code sequentially turns on each of the five output pins (10, 9, 8, 7, and 6) for 1 second each, followed by turning them off in the same order, with a 1-second delay between each action.
    
This results in a visual effect where, if LEDs are connected to these pins, they will light up one after the other and then turn off in the same order, creating a "chasing" effect.
