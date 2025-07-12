So Long - 2D Escape Game

A small 2D game project built in C using the MiniLibX graphics library.
This project was developed as part of the curriculum at 42 School.
🎮 Game Objective

Your goal is to guide the main character through a maze-like map, collect all collectibles, and reach the exit — all while avoiding walls and invalid paths. Every move counts!
🧱 Game Mechanics

    Use W, A, S, D keys to move (or ZQSD/arrow keys as alternatives).
    Move only in four directions (up, down, left, right).
    You can't walk through walls.
    The move counter is displayed in the terminal.
    Game window closes cleanly on ESC or window close.

🗺️ Map Format

The map must be a .ber file consisting of the following characters:

    1 → Wall
    0 → Empty space
    C → Collectible
    E → Exit
    P → Player start position

The map must:

    Be rectangular
    Be surrounded by walls
    Include at least one exit, one start position, and one collectible
    Contain a valid path from start to all collectibles and then to the exit

🖼️ Graphics

    Renders a 2D top-down view using MiniLibX
    Smooth window management (resizing, minimizing)
    Uses sprites/textures for rendering tiles

🚀 How to Run

make
./so_long maps/map1-5.ber
