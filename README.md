# Tetris Game

A classic Tetris game built in C++ using raylib.

## Author

Saifullah-232023

## Features

- Falling Tetris blocks
- Block movement and rotation
- Score tracking
- Next-block preview
- Game over and restart
- Background music and sound effects

## Requirements

- CMake 3.17 or newer
- A C++14 compiler
- Internet connection for the first build, because CMake downloads raylib automatically

## Build

```powershell
cmake -S . -B build
cmake --build build --config Release
```

## Run

```powershell
.\build\Release\tetris.exe
```

## Controls

- Left Arrow: move block left
- Right Arrow: move block right
- Down Arrow: move block down faster
- Up Arrow: rotate block

## Project Structure

```text
src/       C++ source code
fonts/     game font
sounds/    music and sound effects
```

## Notes

Build files are not included in the repository. Run the build commands after cloning or downloading the project.
