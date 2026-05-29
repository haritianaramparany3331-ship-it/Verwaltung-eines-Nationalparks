# Nationalpark Manager

A desktop application to manage staff and animals in a national park,
built with C++ and Qt Framework.

## What it does

- Manage and display a list of park employees
- Manage and display a list of animals in the park
- Clean and intuitive GUI designed with Qt and CSS
- The staff list can be found in build/Desktop_Qt_6_9_3_MinGW_64_bit-Debug/NationalparkGUI/Personal.csv

## Architecture

The project follows a clear separation of concerns:

- **Logic layer** (`NationalPark.pro`) — handles all data and business logic in pure C++
- **GUI layer** (`NationalparkGUI.pro`) — handles all user interface with Qt
- The two layers are connected through a single logic class object inside the GUI class

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

University project (2nd semester, Hochschule Darmstadt) —
demonstrates layered architecture with C++ and Qt Framework.
