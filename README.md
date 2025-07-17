💧 Hydro Power Plant Simulation (OpenGL + GLUT)
This project is a Computer Graphics simulation built using C++ and OpenGL/GLUT that visually demonstrates the working of a Hydroelectric Power Plant. The animation showcases water flow, turbines, transformers, towers, and electricity generation in a dynamic and interactive 2D environment.

🖼️ Demo
A dynamic 2D animated simulation that starts with a welcome screen and proceeds to show water flowing through the dam and powering turbines, generating electricity.

🧰 Tech Stack
Language: C++

Graphics Libraries:

OpenGL

GLUT (OpenGL Utility Toolkit)

Platform: Windows (via <windows.h>)

🎮 Controls
Key	Action
s	Start simulation window
b	Begin water flow
q	Quit application

📁 Project Structure
bash
Copy
Edit
HydroPowerPlant/
├── main.cpp         # Complete C++ OpenGL simulation code
└── README.md        # Project documentation
📦 Installation & Compilation (Windows)
Install Dependencies:

FreeGLUT

OpenGL Utility Toolkit (GLUT)

Compile using g++ (with proper OpenGL/GLUT linking):

bash
Copy
Edit
g++ main.cpp -o hydroplant -lopengl32 -lglu32 -lfreeglut
Run the Executable:

bash
Copy
Edit
./hydroplant
🎯 Features
Interactive simulation of hydro power generation

Welcome screen with title and student info

Dynamic water flow animation through dam, pipes, and turbines

Turbine rotation simulation with electricity wires

Semicircular wire animation for electricity flow

Educational visualization for engineering graphics courses

📽️ Screens Displayed
Welcome Screen: Title, subtitle, and contributor names

Main Scene: Animated dam, turbine, transformer, wires, and flowing water

Exit: Pressing q closes the application

👨‍💻 Authors
M ARSHAD

