# 🎯 AlgoVisualizer

<div align="center">

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge\&logo=c%2B%2B)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Contributors](https://img.shields.io/badge/Contributors-4-orange?style=for-the-badge)](#-authors)

</div>

<div align="center">

**Interactive Implementations of Data Structures and Algorithms in C++**

*Test, visualize, and understand core DSA concepts with modular implementations.*

[Features](#-features) • [Installation](#-installation) • [Algorithms](#-algorithms) • [Contributing](#-contributing)

</div>

---

## 📖 About

**AlgoVisualizer** is a project that implements **core data structures and algorithms in C++**.
It allows users to run, test, and understand algorithms interactively, making it an educational and hands-on tool for learning DSA concepts.

**Key goals:**

* Modular and organized code for each data structure and algorithm
* Run algorithms with custom input
* Serve as a reference for understanding algorithm behavior

---

## 🎥 Demo

[▶️ Watch the 2-Minute Demo](https://github.com/Arsalna-Shaikh/Algo-Visualizer/issues/1#issue-5593745068)
---

## ✨ Features

### 🗂️ Data Structures

* **Array / Vector** – Base visualization for sorting and searching
* **Stack** – LIFO operations (push, pop, top)
* **Queue** – FIFO operations (Regular, Circular Queue, Deque)
* **Linked List** – Singly, Doubly, Circular implementations
* **Tree** – Traversals, insert, delete
* **Graph** – BFS, DFS, Dijkstra’s shortest path
* **String** – Pattern matching algorithms (Naive, KMP)
---

### 🔢 Algorithms

| Algorithm Type | Algorithm              | Best / Avg / Worst                               | Space Complexity |
| -------------- | ---------------------- | ------------------------------------------------ | ---------------- |
| **Sorting**    | Bubble Sort            | O(n) / O(n²) / O(n²)                             | O(1)             |
|                | Selection Sort         | O(n²) / O(n²) / O(n²)                            | O(1)             |
|                | Insertion Sort         | O(n) / O(n²) / O(n²)                             | O(1)             |
|                | Merge Sort             | O(n log n) / O(n log n) / O(n log n)             | O(n)             |
|                | Quick Sort             | O(n log n) / O(n log n) / O(n²)                  | O(log n)         |
| **Searching**  | Linear Search          | O(1) / O(n) / O(n)                               | O(1)             |
|                | Binary Search          | O(1) / O(log n) / O(log n)                       | O(1)             |
| **Graph**      | BFS                    | O(V+E) / O(V+E) / O(V+E)                         | O(V)             |
|                | DFS                    | O(V+E) / O(V+E) / O(V+E)                         | O(V)             |
|                | Dijkstra               | O((V+E) log V) / O((V+E) log V) / O((V+E) log V) | O(V)             |
| **String**     | Naive Pattern Matching | O(n*m) / O(n*m) / O(n*m)                         | O(1)             |
|                | KMP Algorithm          | O(n+m) / O(n+m) / O(n+m)                         | O(m)             |

---

## 🚀 Installation

### Prerequisites

* **C++ Compiler:** GCC / G++ / Clang / MSVC
* **IDE (optional):** Visual Studio, Code::Blocks, Qt Creator, VS Code

### Clone the Repository

```bash
git clone https://github.com/yourusername/AlgoVisualizer.git
cd AlgoVisualizer
```

### Build & Run

```bash
g++ main.cpp -o main
./main
```

Follow the prompts to select a data structure or algorithm and input your test data.

---

## 🏗️ Project Structure

```
AlgoVisualizer/
├── main.cpp                          # Application entry point
├── StartScreen.h / StartScreen.cpp / StartScreen.ui   # Welcome screen
├── MainMenu.h / MainMenu.cpp / MainMenu.ui          # Main menu with navigation
├── mainwindow.h / mainwindow.cpp / mainwindow.ui
├── README.md                         # Project documentation
├── LICENSE                           # MIT License
└── widgets/                          # Data structure visualizers
    ├── ArrayVisualizer.h / ArrayVisualizer.cpp              # Base visualization widget
    ├── searching_sorting.h / searching_sorting.cpp  # 7 algorithms
    ├── StackVisualizer.h / StackVisualizer.cpp              # Stack (LIFO)
    ├── QueueVisualizer.h / QueueVisualizer.cpp              # Queue, Circular Queue, Deque
    ├── LinkedListVisualizer.h / LinkedListVisualizer.cpp    # Singly, Doubly, Circular
    ├── TreeVisualizer.h / TreeVisualizer.cpp                # Binary tree traversals
    ├── GraphVisualizer.h / GraphVisualizer.cpp              # BFS, DFS, Dijkstra
    └── StringPatternVisualizer.h / StringPatternVisualizer.cpp # Naive, KMP

```

---

## 🤝 Contributing

We welcome contributions!

**Steps to Contribute:**

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/XYZ`
3. Commit your changes: `git commit -m 'Add feature XYZ'`
4. Push to your branch: `git push origin feature/XYZ`
5. Open a Pull Request

**Contribution Areas:**

* 🐛 Bug fixes
* ✨ New algorithms
* 🎨 Code readability
* 📚 Documentation

---

## 📝 License

This project is licensed under **MIT License** – see [LICENSE](LICENSE).

---

## 👥 Authors

* Contributors: [Hamna ALi Khan](https://github.com/HamnaAliKhan) ,[Afeerah Shafqat](https://github.com/Afeerah-S), [Arsalna Shaikh](https://github.com/Arsalna-Shaikh), [Amna Mohsin](https://github.com/amna-mohsin), [Ayesha Amir](https://github.com/AYESHAAMIR01)
* For collaborations or inquiries, connect on [LinkedIn](https://www.linkedin.com/in/arsalna-shaikh-53a236321/)

---

## 🔮 Future Enhancements

* Add GUI visualizations for algorithms
* Implement advanced data structures: Heap, AVL, Hash Table
* Add performance comparisons and benchmarks
* Improve interactivity and animations

---

<div align="center">

**Made with ❤️ using C++**

[⬆ Back to Top](#-algovisualizer)

</div>
