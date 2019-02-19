# leetcode

Personal notes for [leetcode.com](https://leetcode.com) solutions with support for local building and unit testing.

1. [Two Sum](https://leetcode.com/problems/two-sum/description/)

- Brutal force: [72ms](https://leetcode.com/submissions/detail/162240348/) (top 43.79%)
- Hash table (map): [4ms](https://leetcode.com/submissions/detail/162239318/) **(top 100.00%)**

2. [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)

- Linked list: [16ms](https://leetcode.com/submissions/detail/162239592/) **(top 100.00%)**

3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

- Hash table (map): [8ms](https://leetcode.com/submissions/detail/162239918/) **(top 100.00%)**

4. [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)

- Non-recursive: [28 ms](https://leetcode.com/submissions/detail/207084478/) (top 96.13%)
- Recursion: [16 ms](https://leetcode.com/submissions/detail/162238879/) **(top 100.00%)**

5. [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)

- Brutal force: [8ms](https://leetcode.com/submissions/detail/162245132/) (top 87.41%)
- Manacher's algorithm: [0ms](https://leetcode.com/submissions/detail/163268305/) **(top 100.00%)**

6. [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/)

- Brutal force: [40ms](https://leetcode.com/submissions/detail/163403986/) (top 55.26%)
- Fast for-loop: [8ms](https://leetcode.com/submissions/detail/163405430/) **(top 100.00%)**

7. [Reverse Integer](https://leetcode.com/problems/reverse-integer/)

- Use `INT_MAX`: [4ms](https://leetcode.com/submissions/detail/163412779/) **(top 100.00%)**

8. [String to Integer (atoi)](https://leetcode.com/submissions/detail/163418517/)

- Use `INT_MAX`: [8ms](https://leetcode.com/submissions/detail/163418517/) (top 99.90%)

9. [Palindrome Number](https://leetcode.com/problems/palindrome-number/)

- Lookup table: [52ms](https://leetcode.com/submissions/detail/163427855/) **(top 100.00%)**

10. [Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)

- Dynamic programming: [4ms](https://leetcode.com/submissions/detail/163443067/) **(top 100.00%)**

11. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

- Two pointers: [12ms](https://leetcode.com/submissions/detail/207126145/) **(top 100.00%)**

12. [Integer to Roman](https://leetcode.com/problems/integer-to-roman/)

- Two arrays: [28ms](https://leetcode.com/submissions/detail/207183826/) (top 99.20%)
- Lookup table: [28ms](https://leetcode.com/submissions/detail/207184862/) (top 99.20%)

13. [Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

- Two vectors: [36ms](https://leetcode.com/submissions/detail/208110036/) (top 98.41%)
- Map: [44ms](https://leetcode.com/submissions/detail/208111358/) (top 97.72%)

14. [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

- [4ms](https://leetcode.com/submissions/detail/208296888/) **(top 100.00%)**

15. [3Sum](https://leetcode.com/problems/3sum/)

- Two pointers: [112ms](https://leetcode.com/submissions/detail/208704228/) (top 99.88%)

16. [3Sum Closest](https://leetcode.com/problems/3sum-closest/)

- Two pointers: [8ms](https://leetcode.com/submissions/detail/208717787/) **(top 100.00%)**

17. [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

- Deque: [4ms](https://leetcode.com/submissions/detail/208767129/) **(top 100.00%)**

18. [4Sum](https://leetcode.com/problems/4sum/)

- Set: [40ms](https://leetcode.com/submissions/detail/208778417/) (top 82.57%)
- Fast for-loop: [20ms](https://leetcode.com/submissions/detail/208780575/) (top 90.04%)

19. [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

- One pass: [8ms](https://leetcode.com/submissions/detail/208784263/) **(top 100.00%)**

20. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

- Stack: [4ms](https://leetcode.com/submissions/detail/208788918/) **(top 100.00%)**

21. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

- Two swaps: [12ms](https://leetcode.com/submissions/detail/209094239/) **(top 100.00%)**

------

## Environment

- Ubuntu
- Visual Studio Code *with following extensions:*
  - C/C++ (ms-vscode.cpptools)
  - C/C++ Clang Command Adapter (mitaki28.vscode-clang)
  - CMake (twxs.cmake)
  - CMake Tools (vector-of-bool.cmake-tools)
- clang (clang++ is used. You can use other tools as long as your `.vscode/c_cpp_properties.json` file is modified correctly) 
- CMake
- Boost (for unit testing)

## Usage

Each folder contains 3 files: `solution.hpp`, `solution.cpp` and `solution_test.cpp`. The first folder `001-Two-Sum` contains an additional `main.cpp` file, in case you don't feel like using unit testing and you can test your own cases in `main.cpp`.

Add following lines to your `settings.json` to configure the building and linting:

```json
{
    "clang.executable": "clang++",
    "clang.cflags": ["c11"],
    "clang.cxxflags": ["-std=c++14"]
}
```

**Steps to build a solution:**

1. Change the line `set(PROBLEM_NAME {Problem_Folder})` in `CMakeLists.txt` to choose the problem you want to solve, in which `{Problem_Folder}` is the folder name of the problem. For example, `set(PROBLEM_NAME "001-Two-Sum")`.
2. Press `Ctrl` + `Shift` + `P` to bring up the Command Palette of VSCode. Type in `CMake`, and look for a `CMake: Configure` command, select it. It will configure the cache files and makefile which are located in `build` folder by default.
3. Type in or look for a `CMake: Build` command in the Command Palette and execute it. It will compile the source codes of the solution that you previously chose.
4. (Debug) Press  `Ctrl` + `Shift` + `D` or click the bug icon on the left. The `.vscode/launch.json` for debugging is already set up for you, so you can freely set your break points and start debugging!
5. (Unit testing) Type in or look for a `CMake: Run tests` command in the Command Palette and execute it. It will run all test cases in `solution_test.cpp`. Feel free to add your own test cases.

**Clear build folder:**

1. Press `Ctrl` + `Shift` + `P` to bring up the Command Palette. Type in `Task: Run Task` and press `enter`. Choose `clean` will delete everything in the `build` folder. Bear in mind that you need to configure the project after cleaning the folder or switching to another solution, by either executing `Task: Run Task` -> `configure` or `CMake: Configure`.

