# A Nationalpark Manager

A desktop application to manage staff and animals in a national park,
built with C++ (logic) and Qt Framework (GUI)

## What it does

- Manage and display a list of park employees:
   *You can add employees and it will be printed in the given list window
   *You can save your list in a csv-file `Personal.csv`
   *You can load it afterwards
- Manage and display a list of animals in the park
   *You can add animals and it will be printed in the given list window
   *You can save your list in a binary file `datei.bin`
   *You can load it afterwards
- Clean and intuitive GUI designed with Qt and CSS
- The saved staff list can be found in `build/Desktop_Qt_6_9_3_MinGW_64_bit-Debug/NationalparkGUI/Personal.csv`
- The saved animal list can be found in `build/Desktop_Qt_6_9_3_MinGW_64_bit-Debug/NationalparkGUI/datei.bin`

## Architecture

The project follows a clear separation of concerns:

- **Logic layer** (`NationalPark.pro`) — handles all data and business logic in pure C++
- **GUI layer** (`NationalparkGUI.pro`) — handles all user interface with Qt
- The two layers are connected with an instance of the employee list class and an instance of the animal list class in the GUI layer

This separation makes the code maintainable and easy to extend.

## Tech Stack

- C++
- Qt Framework (GUI)
- qmake (build system)
- CSS (main window styling)

## How to run

1. Open `NationalparkProjekt.pro` in Qt Creator
2. Build with qmake (Desktop Qt 6.9.3 MinGW 64-bit)
3. The compiled application is located at:
   `build/Desktop_Qt_6_9_3_MinGW_64_bit-Debug/NationalparkProjekt`

## Context

One of my first projects, where I combine logic and GUI.
It demonstrates layered architecture with C++ and Qt Framework.
