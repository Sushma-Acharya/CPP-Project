# Truth and Lie Game

## Description
This is a simple C++ console-based game where the program randomly selects two true statements and one false statement from separate text files (truth.txt and lie.txt). The user has to guess which statement is the lie.

## How It Works
1. The program reads the number of lines from `truth.txt` and `lie.txt`.
2. It randomly selects two different truths and one lie.
3. The statements are displayed in random order.
4. The user inputs their guess for which statement is the lie.
5. The program informs the user if their guess is correct or incorrect.

## Files
- `truth.txt` - Contains true statements (one per line)
- `lie.txt` - Contains false statements (one per line)
- `project.cpp` - The C++ source code for the game

## How to Run
1. Compile the program using a C++ compiler:
   ```sh
   g++ project.cpp -o project
   ```
2. Run the executable:
   ```sh
   ./project
   ```
3. Follow the on-screen instructions to play the game.

## Example Output
```
1. The Eiffel Tower is in Paris.
2. Water boils at 100 degrees Celsius.
3. The sun revolves around the Earth.
Enter the lie no.: 3
Wooohooooo, you got it right!
```

## Requirements
- C++ Compiler (g++)
- `truth.txt` and `lie.txt` files with appropriate content

## Contributing
Feel free to fork this repository and improve the game. Suggestions and pull requests are welcome!
