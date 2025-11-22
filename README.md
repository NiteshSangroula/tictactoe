# Tic-Tac-Toe (C)

A simple terminal-based Tic-Tac-Toe game written in C.  
Built for learning clean project structure, modular C code, and Makefile-based builds.

---

## 🚀 How to Run

Make sure you're inside the project folder.

### 1. Build the project
```
make
```

### 2. Run the game
```
./tictactoe
```

### 3. Clean build files (optional)
```
make clean
```

---

## 📂 Project Structure
```
.
├── src/
│ ├── board.c # Board state + logic
│ ├── game.c # Game loop, user input, turn flow
│ └── main.c # Entry point
├── include/
│ ├── board.h
│ └── game.h
├── Makefile
└── README.md
```

---

## ✨ Features

- Playable Tic-Tac-Toe for 2 players  
- Clean modular code (board + game logic separated)  
- Proper Makefile build setup  
- Fully terminal-based  

---

## 🔧 Next Steps (Planned)

- **Bot Mode (AI opponent)**
  - Easy mode (random moves)
  - Hard mode (minimax algorithm)

- **Colored Board Output**
- **Input Validation Improvements**
- **Replay Option**
- **Scoreboard Tracking**

---

## 📜 License

Feel free to use, modify, and learn from the code.
