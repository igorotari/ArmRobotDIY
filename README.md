# ArmRobotDIY
How I assembled and programmed the robot arm

<p align="center">
  <img width="400" height="250" src="https://github.com/igorotari/ArmRobotDIY/blob/main/94i0qr.gif">
</p>

# Robotic Arm Project 🤖

Welcome to my **Robotic Arm Project**! This project demonstrates how I programmed a robotic arm using servos and an Arduino board to pick up and move objects between two locations in a loop. 🚀

## How I Put It All Together

### 🛠 What I Needed:
- **Arduino Board**: The brain of the project, controlling the arm.
- **Servo Motors**: Four servos to move the different parts of the robotic arm, including the base, joints, and claw.
- **Breadboard and Wires**: To connect everything together.
- **Power Supply**: To give life to the servos and the Arduino.
- **Arduino IDE**: To write the code and upload it to the board.

### 👨‍💻 The Code
The code is written in C++ using the **Servo.h** library to control the four servos. Each servo moves at different angles, simulating the robotic arm picking up an object, moving it to a new location, dropping it, and then returning to its starting position.

- **Servo 1**: Controls the base rotation.
- **Servo 2 and 3**: Handle the movement of the arm joints.
- **Servo 4**: Opens and closes the claw.

The main logic lies in the `loop()` function, where the arm continuously picks up and moves the object in a smooth and controlled manner.

### 📜 Summary
This project was a fun way to learn about servo motors and Arduino programming. I enjoyed figuring out how to coordinate the movements and make the robotic arm perform repetitive tasks like a real industrial robot!

Check out the code and give it a try! Feel free to modify the movements or add more functionality to the arm.

## 🚀 Future Improvements
In the future, I plan to:
- Add more complex movements.
- Use sensors to detect objects automatically.
- Improve the arm’s precision.

Stay tuned for updates!

---
Made with ❤️ by [Your Name]
