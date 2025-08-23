# leetcode C++高性能版

[leetcode](https://leetcode.com)的C++高性能题解，追求运行时长 **top 95%+**

![img/image.png](img/image.png)

------

## 数据统计

![](https://geps.dev/progress/78) Top100受欢迎题目: 78 / 100 已解决

![](https://geps.dev/progress/59) Top面试题目: 86 / 145 已解决

![](https://geps.dev/progress/4) 总计: 159 / 3656 已解决

![](https://geps.dev/progress/90) 运行时长 **95%** 以上的题解占比: 144 / 159

------

## 题目分类

| 分类 | 题目编号 |
| --- | --- |
| Array / String | 1, 3, 6, 11, 14, 15, 16, 18, 20, 22, 26, 27, 28, 30, 31, 38, 41, 42, 44, 45, 48, 49, 54, 55, 56, 73, 75, 76, 80, 88, 125, 239, 283, 349, 350, 438, 567, 670, 832, 1838 |
| Linked list | 2, 19, 21, 23, 24, 25, 61, 86, 92, 141, 142, 160, 206, 234, 876 |
| Recursion | 4, 33, 34, 35, 69, 74, 153, 215, 240, 278, 287, 301, 540, 704 |
| Dynamic Programming | 5, 10, 32, 36, 37, 53, 62, 63, 64, 70, 79, 84, 91, 96, 118, 120, 121, 122, 123, 128, 130, 134, 188, 198, 213, 221, 279, 300, 309, 322, 509, 714, 864, 871 |
| Numerical | 7, 8, 9, 12, 13, 29, 43, 50, 66, 136, 150, 564 |
| Backtracking | 17, 39, 40, 46, 47, 51, 60, 78, 131 |
| Binary Tree | 94, 98, 101, 102, 103, 104, 105, 106, 108, 111, 114, 116, 124, 144, 145, 226, 230, 235, 236, 337, 450, 538, 543, 652, 654, 700, 701, 889, 958, 1038 |
| Graph / DFS | 127, 752 |
| System Design | 146, 460 |

------

## 开发环境

已经在以下环境测试通过：

- macOS Sequoia 15.6
  - Clang 17.0.0
  - CMake 4.1.0
  - Catch2 v3.9.1
- Windows 11 24H2
  - VC 14.44.35207 (Visual Studio 2022)
  - CMake 4.1.0
  - Catch2 v3.9.1

------

## 题解

1. [Two Sum](https://leetcode.com/problems/two-sum/description/)

- Hash table: [0ms](https://leetcode.com/problems/two-sum/submissions/1743444479/) **(top 100.00%)**

2. [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)

- Linked list: [0ms](https://leetcode.com/problems/add-two-numbers/submissions/1744458758/) **(top 100.00%)**

3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

- Hash table: [0ms](https://leetcode.com/submissions/detail/624009196/) **(top 100.00%)**

4. [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)

- Non-recursive: [0ms](https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/1744462906/) **(top 100.00%)**
- Recursion: [0ms](https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/1744461258/) **(top 100.00%)**

5. [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)

- Brute force: [0ms](https://leetcode.com/problems/longest-palindromic-substring/submissions/1744465370/) **(top 100.00%)**
- Manacher's algorithm: [0ms](https://leetcode.com/submissions/detail/163268305/) **(top 100.00%)**

6. [ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/)

- Brute force: [31ms](https://leetcode.com/problems/zigzag-conversion/submissions/1744467555/) (top 11.68%)
- Better loop: [0ms](https://leetcode.com/problems/zigzag-conversion/submissions/1744468546/) **(top 100.00%)**

7. [Reverse Integer](https://leetcode.com/problems/reverse-integer/)

- [0ms](https://leetcode.com/submissions/detail/625325000/) **(top 100.00%)**

8. [String to Integer (atoi)](https://leetcode.com/submissions/detail/163418517/)

- [0ms](https://leetcode.com/submissions/detail/625369303/) **(top 100.00%)**

9. [Palindrome Number](https://leetcode.com/problems/palindrome-number/)

- Lookup table: [0ms](https://leetcode.com/problems/palindrome-number/submissions/1744470289/) **(top 100.00%)**

10. [Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)

- DP: [0ms](https://leetcode.com/problems/regular-expression-matching/submissions/1744471585/) **(top 100.00%)**

11. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

- Two pointers: [0ms](https://leetcode.com/problems/container-with-most-water/submissions/1744473200/) **(top 100.00%)**

12. [Integer to Roman](https://leetcode.com/problems/integer-to-roman/)

- Two arrays: [0ms](https://leetcode.com/problems/integer-to-roman/submissions/1744474752/) **(top 100.00%)**
- Lookup table: [0ms](https://leetcode.com/problems/integer-to-roman/submissions/1744475813/) **(top 100.00%)**

13. [Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

- [0ms](https://leetcode.com/problems/roman-to-integer/submissions/1744478202/) **(top 100.00%)**
- Map: [3ms](https://leetcode.com/problems/roman-to-integer/submissions/1744481945/) (top 75.78%)

14.  [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

- [0ms](https://leetcode.com/problems/longest-common-prefix/submissions/1744485165/) **(top 100.00%)**

15. [3Sum](https://leetcode.com/problems/3sum/)

- Two pointers: [31ms](https://leetcode.com/problems/3sum/submissions/1744487682/) **(top 99.17%)**

16. [3Sum Closest](https://leetcode.com/problems/3sum-closest/)

- Two pointers: [5ms](https://leetcode.com/problems/3sum-closest/submissions/1744497480/) (top 93.93%)

17. [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

- Deque: [0ms](https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1744500143/) **(top 100.00%)**
- DFS: [0ms](https://leetcode.com/submissions/detail/625909390/) **(top 100.00%)**

18. [4Sum](https://leetcode.com/problems/4sum/)

- Set: [35ms](https://leetcode.com/problems/4sum/submissions/1744504101/) (top 16.53%)
- Better loop: [0ms](https://leetcode.com/problems/4sum/submissions/1744501884/) **(top 100.00%)**

19. [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

- [0ms](https://leetcode.com/submissions/detail/625919082/) **(top 100.00%)**

20. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

- Stack: [0ms](https://leetcode.com/problems/valid-parentheses/submissions/1744507576/) **(top 100.00%)**
- Lookup table: [0ms](https://leetcode.com/problems/valid-parentheses/submissions/1744508432/) **(top 100.00%)**

21. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

- Two swaps: [0ms](https://leetcode.com/problems/merge-two-sorted-lists/submissions/1744509502/) **(top 100.00%)**

22. [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

- [0ms](https://leetcode.com/submissions/detail/626012181/) **(top 100.00%)**
- Deque: [0ms](https://leetcode.com/problems/generate-parentheses/submissions/1415504971) **(top 100.00%)**

23. [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

- Use 021: [0ms](https://leetcode.com/problems/merge-k-sorted-lists/submissions/1744511229/) **(top 100.00%)**
- Priority queue: [0ms](https://leetcode.com/problems/merge-k-sorted-lists/submissions/1744512697/) **(top 100.00%)**

24. [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)

- [0ms](https://leetcode.com/submissions/detail/318720097/) **(top 100.00%)**

25. [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

- [0ms](https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/1744513834/) **(top 100.00%)**

26. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

- [0ms](https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1744515251/) **(top 100.00%)**

27. [Remove Element](https://leetcode.com/problems/remove-element/)

- [0ms](https://leetcode.com/submissions/detail/318922754/) **(top 100.00%)**

28. [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

- Brute force: [0ms](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1744518236/) **(top 100.00%)**
- KMP: [0ms](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1744523486/) **(top 100.00%)**

29. [Divide Two Integers](https://leetcode.com/problems/divide-two-integers/)

- [0ms](https://leetcode.com/problems/divide-two-integers/submissions/1744526748/) **(top 100.00%)**

30. [Substring with Concatenation of All Words](https://leetcode.com/problems/substring-with-concatenation-of-all-words/)

- [16ms](https://leetcode.com/problems/substring-with-concatenation-of-all-words/submissions/1744528957/) (top 90.48%)

31. [Next Permutation](https://leetcode.com/problems/next-permutation/)

- [0ms](https://leetcode.com/problems/next-permutation/submissions/1744532022/) **(top 100.00%)**

32. [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)

- [0ms](https://leetcode.com/problems/longest-valid-parentheses/submissions/1744537185/) **(top 100.00%)**

33. [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

- [0ms](https://leetcode.com/submissions/detail/229278082/) **(top 100.00%)**

34. [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

- [0ms](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1744538658/) **(top 100.00%)**

35. [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

- [0ms](https://leetcode.com/problems/search-insert-position/submissions/1416053798) **(top 100.00%)**

36. [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)

- [3ms](https://leetcode.com/problems/valid-sudoku/submissions/1744540255/) (top 62.61%)

37. [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)

- [4ms](https://leetcode.com/submissions/detail/338275850/) **(top 98.43%)**

38. [Count and Say](https://leetcode.com/problems/count-and-say/)

- [0ms](https://leetcode.com/problems/count-and-say/submissions/1744550630/) **(top 100.00%)**

39. [Combination Sum](https://leetcode.com/problems/combination-sum/)

- [0ms](https://leetcode.com/problems/combination-sum/submissions/1744551584/) **(top 100.00%)**

40. [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)

- [0ms](https://leetcode.com/problems/combination-sum-ii/submissions/1744552804/) **(top 100.00%)**

41. [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)

- Lookup table: [0ms](https://leetcode.com/problems/first-missing-positive/submissions/1744879419/) **(top 100.00%)**
- Swap: [0ms](https://leetcode.com/problems/first-missing-positive/submissions/1744879842/) **(top 100.00%)**

42. [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)

- Two pointers: [515ms](https://leetcode.com/problems/trapping-rain-water/submissions/1744881463/) (top 5.33%)
- Auxiliary vector: [0ms](https://leetcode.com/problems/trapping-rain-water/submissions/1744881975/) **(top 100.00%)**

43.  [Multiply Strings](https://leetcode.com/problems/multiply-strings/)

- C++ interface: [2ms](https://leetcode.com/problems/multiply-strings/submissions/1744883435/) (top 71.45%)
- C interface: [0ms](https://leetcode.com/problems/multiply-strings/submissions/1744883733/) **(top 100.00%)**

44. [Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)

- [0ms](https://leetcode.com/problems/wildcard-matching/submissions/1744884076/) **(top 100.00%)**

45. [Jump Game II](https://leetcode.com/problems/jump-game-ii/)

- [0ms](https://leetcode.com/problems/jump-game-ii/submissions/1744884320/) **(top 100.00%)**

46. [Permutations](https://leetcode.com/problems/permutations/)

- Recursive: [7ms](https://leetcode.com/problems/permutations/submissions/1744886637/) (top 6.15%)
- Better loop: [0ms](https://leetcode.com/problems/permutations/submissions/1744886897/) **(top 100.00%)**
- Backtracking: [0ms](https://leetcode.com/problems/permutations/submissions/1744887086/) **(top 100.00%)**

47. [Permutations II](https://leetcode.com/problems/permutations-ii/)

- [3ms](https://leetcode.com/problems/permutations-ii/submissions/1744887723/) (top 67.49%)

48. [Rotate Image](https://leetcode.com/problems/rotate-image/)

- [0ms](https://leetcode.com/problems/rotate-image/submissions/1744888823/) **(top 100.00%)**
- Flip + swap: [0ms](https://leetcode.com/problems/rotate-image/submissions/1744889005/) **(top 100.00%)**

49. [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

- Hash table: [23ms](https://leetcode.com/problems/group-anagrams/submissions/1744889830/) (top 32.64%)
- Sort + hash table: [7ms](https://leetcode.com/problems/group-anagrams/submissions/1744891159/) **(top 98.59%)**

50. [Pow(x, n)](https://leetcode.com/problems/powx-n/)

- [0ms](https://leetcode.com/problems/powx-n/submissions/1744893953/) **(top 100.00%)**

51. [N-Queens](https://leetcode.com/problems/n-queens/)

- [0ms](https://leetcode.com/problems/n-queens/submissions/1744895138/) **(top 100.00%)**

53. [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

- Divide and conquer: [21ms](https://leetcode.com/problems/maximum-subarray/submissions/1744895992/) (top 5.11%)
- Kadane: [0ms](https://leetcode.com/problems/maximum-subarray/submissions/1744903617/) **(top 100.00%)**
- DP: [0ms](https://leetcode.com/submissions/detail/323667238/) **(top 100.00%)**

54. [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

- [0ms](https://leetcode.com/submissions/detail/230362738/) **(top 100.00%)**

55. [Jump Game](https://leetcode.com/problems/jump-game/)

- Forward: [0ms](https://leetcode.com/problems/jump-game/submissions/1744905044/) **(top 100.00%)**
- Backward: [0ms](https://leetcode.com/problems/jump-game/submissions/1744905413/) **(top 100.00%)**

56. [Merge Intervals](https://leetcode.com/problems/merge-intervals/)

- [2ms](https://leetcode.com/problems/merge-intervals/submissions/1744909887/) (top 93.23%)

60. [Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)

- [0ms](https://leetcode.com/submissions/detail/337796856/) **(top 100.00%)**

61. [Rotate List](https://leetcode.com/problems/rotate-list/)

- [0ms](https://leetcode.com/problems/rotate-list/submissions/1744912499/) **(top 100.00%)**

62. [Unique Paths](https://leetcode.com/problems/unique-paths/)

- [0ms](https://leetcode.com/submissions/detail/630836580/) **(top 100.00%)**

63. [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)

- [0ms](https://leetcode.com/submissions/detail/323676108/) **(top 100.00%)**

64. [Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)

- [0ms](https://leetcode.com/problems/minimum-path-sum/submissions/1744912839/) **(top 100.00%)**

66. [Plus One](https://leetcode.com/problems/plus-one/)

- [0ms](https://leetcode.com/submissions/detail/231259041/) **(top 100.00%)**

69. [Sqrt(x)](https://leetcode.com/problems/sqrtx/)

- [0ms](https://leetcode.com/submissions/detail/231415498/) **(top 100.00%)**

70. [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)

- [0ms](https://leetcode.com/submissions/detail/630859356/) **(top 100.00%)**

73. [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

- [0ms](https://leetcode.com/problems/set-matrix-zeroes/submissions/1744913904/) **(top 100.00%)**

74. [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

- [0ms](https://leetcode.com/problems/search-a-2d-matrix/submissions/1744914476/) **(top 100.00%)**

75. [Sort Colors](https://leetcode.com/problems/sort-colors/)

- [0ms](https://leetcode.com/submissions/detail/630908376/) **(top 100.00%)**
- three pointer: [0ms](https://leetcode.com/submissions/detail/231976573/) **(top 100.00%)**

76. [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)

- Sliding window: [23ms](https://leetcode.com/problems/minimum-window-substring/submissions/1744916625/) (top 13.60%)
- Hash table: [0ms](https://leetcode.com/problems/minimum-window-substring/submissions/1744917528/) **(top 100.00%)**

77. [Subsets](https://leetcode.com/problems/subsets/)

- [0ms](https://leetcode.com/problems/subsets/submissions/1744918400/) **(top 100.00%)**
- Backtrack: [0ms](https://leetcode.com/problems/subsets/submissions/1744918691/) **(top 100.00%)**
- Bitwise: [0ms](https://leetcode.com/submissions/detail/630925819/) **(top 100.00%)**

79. [Word Search](https://leetcode.com/problems/word-search/)

- [92ms](https://leetcode.com/submissions/detail/233113744/) **(top 97.42%)**
- Inplace: [72ms](https://leetcode.com/submissions/detail/233115782/) **(top 97.59%)**

80. [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

- [3ms](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/1744921602/) **(top 96.26%)**

84. [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)

- Two vector: [4ms](https://leetcode.com/submissions/detail/233606081/) **(top 99.11%)**
- One vector: [4ms](https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/1744922199/) **(top 99.11%)**

86. [Partition List](https://leetcode.com/problems/partition-list/)

- [0ms](https://leetcode.com/problems/partition-list/submissions/1744923182/) **(top 100.00%)**

88. [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

- [0ms](https://leetcode.com/problems/merge-sorted-array/submissions/1744924173/) **(top 100.00%)**
- Three pointers: [0ms](https://leetcode.com/submissions/detail/233802294/) **(top 100.00%)**

91. [Decode Ways](https://leetcode.com/problems/decode-ways/)

- [0ms](https://leetcode.com/submissions/detail/630967074/) **(top 100.00%)**

92. [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)

- [0ms](https://leetcode.com/submissions/detail/641332798/) **(top 100.00%)**

94. [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

- Recursion - vector: [0ms](https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/1744925000/) **(top 100.00%)**
- Recursion - list: [0ms](https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/1744925632/) **(top 100.00%)**
- Stack: [0ms](https://leetcode.com/submissions/detail/234693349/) **(top 100.00%)**
- Stack: [0ms](https://leetcode.com/submissions/detail/632069693/) **(top 100.00%)**

96. [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)

- [0ms](https://leetcode.com/submissions/detail/645366588/) **(top 100.00%)**

98. [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

- [0ms](https://leetcode.com/problems/validate-binary-search-tree/submissions/1744926085/) **(top 100.00%)**
- Two pointers: [0ms](https://leetcode.com/problems/validate-binary-search-tree/submissions/1744926525/) **(top 100.00%)**

101. [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)

- Recursive: [0ms](https://leetcode.com/submissions/detail/236511384/) **(top 100.00%)**
- Queue: [0ms](https://leetcode.com/problems/symmetric-tree/submissions/1744927963/) **(top 100.00%)**

102. [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)

- [0ms](https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/900368853/) **(top 100.00%)**

103. [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

- [0ms](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/1744928333/) **(top 100.00%)**

104. [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

- [0ms](https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1744928641/) **(top 100.00%)**

105. [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

- [7ms](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/1744929439/) (top 37.32%)
- Hash table: [0ms](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/1744929962/) **(top 100.00%)**
- Stack: [0ms](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/1744930370/) **(top 100.00%)**

106. [Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)

- [3ms](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/submissions/1744930888/) (top 71.46%)
- Hash table: [0ms](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/submissions/1744932774/) **(top 100.00%)**

108. [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

- [0ms](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/submissions/1744935462/) **(top 100.00%)**

111. [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)

- Recursion: [3ms](https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/1744936537/) (top 54.48%)
- Queue: [0ms](https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/1744937636/) **(top 100.00%)**

114. [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)

- [0ms](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/submissions/1744938349/) **(top 100.00%)**

116. [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)

- [11ms](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/submissions/900876771/) (top 82.38%)
- [8ms](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/submissions/1744940522/) (top 91.84%)

118. [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

- [0ms](https://leetcode.com/submissions/detail/632260948/) **(top 100.00%)**
- Swap: [0ms](https://leetcode.com/problems/pascals-triangle/submissions/1744941665/) **(top 100.00%)**
- Resize: [0ms](https://leetcode.com/submissions/detail/317455216/) **(top 100.00%)**

120. [Triangle](https://leetcode.com/problems/triangle/)

- [0ms](https://leetcode.com/submissions/detail/323662920/) **(top 100.00%)**

121. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

- Priority queue: [11ms](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1744944082/) (top 6.67%)
- Forward: [0ms](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1744942743/) **(top 100.00%)**
- Backward: [0ms](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1744943532/) **(top 100.00%)**

122. [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)

- [0ms](https://leetcode.com/submissions/detail/317478340/) **(top 100.00%)**

123. [Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)

- [0ms](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/submissions/1744944683/) **(top 100.00%)**

124. [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)

- [0ms](https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/1744945263/) **(top 100.00%)**

125. [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

- [0ms](https://leetcode.com/problems/valid-palindrome/submissions/1744946181/) **(top 100.00%)**

127. [Word Ladder](https://leetcode.com/problems/word-ladder/)

- [16ms](https://leetcode.com/problems/word-ladder/submissions/1744947060/) **(top 99.21%)**
- Graph + BFS: [103ms](https://leetcode.com/problems/word-ladder/submissions/1744948889/) (top 39.97%)
- Graph + BiDir BFS: [101ms](https://leetcode.com/problems/word-ladder/submissions/1744949776/) (top 40.23%)
- BiDir BFS: [451ms](https://leetcode.com/problems/word-ladder/submissions/1744947827/) (top 19.11%)

128. [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

- DP: [91ms](https://leetcode.com/problems/longest-consecutive-sequence/submissions/1744950767/) (top 30.64%)
- Hash table: [78ms](https://leetcode.com/problems/longest-consecutive-sequence/submissions/1744951785/) (top 70.64%)
- Sort + erase: [15ms](https://leetcode.com/problems/longest-consecutive-sequence/submissions/1744955500/) (top 87.75%)
- Sort: [11ms](https://leetcode.com/problems/longest-consecutive-sequence/submissions/1744952623/) (top 94.32%)

130. [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)

- [0ms](https://leetcode.com/problems/surrounded-regions/submissions/1744956893/) **(top 100.00%)**

131. [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)

- Backtrack: [52ms](https://leetcode.com/problems/palindrome-partitioning/submissions/1744958548/) (top 52.78%)
- Backtrack + DP: [23ms](https://leetcode.com/problems/palindrome-partitioning/submissions/1744959503/) **(top 98.28%)**

134. [Gas Station](https://leetcode.com/problems/gas-station/)

- [0ms](https://leetcode.com/submissions/detail/318700236/) **(top 100.00%)**

136. [Single Number](https://leetcode.com/problems/single-number/)

- [0ms](https://leetcode.com/problems/single-number/submissions/1744962574/) **(top 100.00%)**

141. [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

- [3ms](https://leetcode.com/submissions/detail/645252348/) **(top 99.30%)**

142. [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)

- [3ms](https://leetcode.com/submissions/detail/645263608/) **(top 98.18%)**

144. [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)

- Recursion: [0ms](https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/1744977240/) **(top 100.00%)**
- Stack: [0ms](https://leetcode.com/submissions/detail/632085399/) **(top 100.00%)**

145. [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)

- Recursion: [0ms](https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/1744977910/) **(top 100.00%)**
- Stack: [0ms](https://leetcode.com/submissions/detail/632096936/) **(top 100.00%)**

146. [LRU Cache](https://leetcode.com/problems/lru-cache/)

- [61ms](https://leetcode.com/problems/lru-cache/submissions/1744980783/) (top 85.67%)
- Linked list: [32ms](https://leetcode.com/problems/lru-cache/submissions/1744985623/) **(top 98.86%)**

150. [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)

- [0ms](https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/1744987246/) **(top 100.00%)**

153. [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

- [0ms](https://leetcode.com/submissions/detail/327603478/) **(top 100.00%)**

160. [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)

- [28ms](https://leetcode.com/submissions/detail/641300625/) **(top 96.62%)**

187. [Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/)

- 3-bit hash: [0ms](https://leetcode.com/problems/repeated-dna-sequences/submissions/1744992619/) **(top 100.00%)**
- 2-bit hash: [24ms](https://leetcode.com/problems/repeated-dna-sequences/submissions/1744993443/) **(top 98.77%)**

188. [Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)

- [0ms](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/submissions/1744997324/) **(top 100.00%)**

198. [House Robber](https://leetcode.com/problems/house-robber/)

- [0ms](https://leetcode.com/submissions/detail/323703382/) **(top 100.00%)**

206. [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

- Two pointers: [0ms](https://leetcode.com/problems/reverse-linked-list/submissions/1744998629/) **(top 100.00%)**
- Faster two pointers: [0ms](https://leetcode.com/problems/reverse-linked-list/submissions/1744999148/) **(top 100.00%)**
- Recursion: [0ms](https://leetcode.com/problems/reverse-linked-list/submissions/901975778/) **(top 100.00%)**

213. [House Robber II](https://leetcode.com/problems/house-robber-ii/)

- [0ms](https://leetcode.com/submissions/detail/323713347/) **(top 100.00%)**

215. [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)

- [4ms](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1745000023/) **(top 97.59%)**
- Quick sort: [0ms](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1464291297/) **(top 100.00%)**

221. [Maximal Square](https://leetcode.com/problems/maximal-square/)

- [1ms](https://leetcode.com/problems/maximal-square/submissions/1745001184/) **(top 96.15%)**

226. [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

- [0ms](https://leetcode.com/submissions/detail/645299894/) **(top 100.00%)**

230. [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

- [0ms](https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/1745002273/) **(top 100.00%)**

234. [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)

- Recursion: [4ms](https://leetcode.com/problems/palindrome-linked-list/submissions/1745003586/) (top 53.48%)
- Two pointers: [0ms](https://leetcode.com/problems/palindrome-linked-list/submissions/1745006383/) **(top 100.00%)**

235. [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)

- [14ms](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/1745007997/) **(top 97.81%)**

236. [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

- [6ms](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1745008749/) **(top 96.44%)**

239. [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)

- [11ms](https://leetcode.com/problems/sliding-window-maximum/submissions/1745010408/) **(top 97.23%)**

240. [Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)

- [36ms](https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/1745011236/) **(top 97.55%)**

278. [First Bad Version](https://leetcode.com/problems/first-bad-version/)

- [0ms](https://leetcode.com/submissions/detail/324623560/) **(top 100.00%)**

279. [Perfect Squares](https://leetcode.com/problems/perfect-squares/)

- [0ms](https://leetcode.com/submissions/detail/324570540/) **(top 100.00%)**
- Tree search: [54ms](https://leetcode.com/problems/perfect-squares/submissions/1745012553/) (top 61.29%)

283. [Move Zeroes](https://leetcode.com/problems/move-zeroes/)

- Two pointers: [0ms](https://leetcode.com/problems/move-zeroes/submissions/1745013609/) **(top 100.00%)**
- Faster two pointers: [0ms](https://leetcode.com/problems/move-zeroes/submissions/1745014094/) **(top 100.00%)**

287. [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)

- Binary search: [8ms](https://leetcode.com/submissions/detail/327684807/) (top 48.64%)
- Two pointers: [1ms](https://leetcode.com/problems/find-the-duplicate-number/submissions/1745016838/) (top 76.75%)

300. [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)

- [0ms](https://leetcode.com/submissions/detail/323698359/) **(top 100.00%)**

301. [Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)

- [0ms](https://leetcode.com/problems/remove-invalid-parentheses/submissions/1745017798/) **(top 100.00%)**

309. [Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)

- [0ms](https://leetcode.com/submissions/detail/645290063/) **(top 100.00%)**

322. [Coin Change](https://leetcode.com/problems/coin-change/)

- [15ms](https://leetcode.com/problems/coin-change/submissions/1745018634/) (top 93.27%)

337. [House Robber III](https://leetcode.com/problems/house-robber-iii/)

- Vector: [11ms](https://leetcode.com/problems/house-robber-iii/submissions/1745020557/) (top 25.30%)
- Pair: [0ms](https://leetcode.com/problems/house-robber-iii/submissions/1745023063/) **(top 100.00%)**

349. [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)

- Set: [0ms](https://leetcode.com/problems/intersection-of-two-arrays/submissions/1745024169/) **(top 100.00%)**
- Map: [0ms](https://leetcode.com/problems/intersection-of-two-arrays/submissions/1745024839/) **(top 100.00%)**

350. [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)

- [0ms](https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/1745025600/) **(top 100.00%)**

438. [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)

- [2ms](https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/1745027814/) (top 85.24%)

450. [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)

- [0ms](https://leetcode.com/problems/delete-node-in-a-bst/submissions/1745029005/) **(top 100.00%)**

460. [LFU Cache](https://leetcode.com/problems/lfu-cache/)

- [59ms](https://leetcode.com/problems/lfu-cache/submissions/1745031809/) **(top 98.92%)**

509. [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)

- [0ms](https://leetcode.com/submissions/detail/643918215/) **(top 100.00%)**

538. [Convert BST to Greater Tree](https://leetcode.com/problems/convert-bst-to-greater-tree/)

- [0ms](https://leetcode.com/problems/convert-bst-to-greater-tree/submissions/1745033310/) **(top 100.00%)**

540. [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)

- Recursion: [0ms](https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/1745034704/) **(top 100.00%)**
- Iteration: [0ms](https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/1745034063/) **(top 100.00%)**

543. [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)

- [0ms](https://leetcode.com/problems/diameter-of-binary-tree/submissions/1745035633/) **(top 100.00%)**

564. [Find the Closest Palindrome](https://leetcode.com/problems/find-the-closest-palindrome/)

- [0ms](https://leetcode.com/submissions/detail/633536384/) **(top 100.00%)**

567. [Permutation in String](https://leetcode.com/problems/permutation-in-string/)

- [2ms](https://leetcode.com/problems/permutation-in-string/submissions/1745037892/) (top 73.12%)

652. [Find Duplicate Subtrees](https://leetcode.com/problems/find-duplicate-subtrees/)

- [13ms](https://leetcode.com/problems/find-duplicate-subtrees/submissions/1745136012/) (top 93.57%)

654. [Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/)

- [8ms](https://leetcode.com/problems/maximum-binary-tree/submissions/1745138626/) (top 75.89%)

670. [Maximum Swap](https://leetcode.com/problems/maximum-swap/)

- [0ms](https://leetcode.com/submissions/detail/643329094/) **(top 100.00%)**

700. [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/)

- [0ms](https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1745140408/) **(top 100.00%)**

701. [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/)

- [0ms](https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/1745141809/) **(top 100.00%)**

704. [Binary Search](https://leetcode.com/problems/binary-search/)

- [0ms](https://leetcode.com/problems/binary-search/submissions/1745142524/) **(top 100.00%)**

714. [Best Time to Buy and Sell Stock with Transaction Fee](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/)

- [0ms](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/1745143128/) **(top 100.00%)**

752. [Open the Lock](https://leetcode.com/problems/open-the-lock/)

- BFS: [132ms](https://leetcode.com/problems/open-the-lock/submissions/1745144304/) (top 66.03%)

832. [Flipping an Image](https://leetcode.com/problems/flipping-an-image/)

- [0ms](https://leetcode.com/problems/flipping-an-image/submissions/1745147141/) **(top 100.00%)**

864. [Shortest Path to Get All Keys](https://leetcode.com/problems/shortest-path-to-get-all-keys/)

- [8ms](https://leetcode.com/problems/shortest-path-to-get-all-keys/submissions/1745148944/) **(top 98.51%)**

871. [Minimum Number of Refueling Stops](https://leetcode.com/problems/minimum-number-of-refueling-stops/)

- DP: [13ms](https://leetcode.com/problems/minimum-number-of-refueling-stops/submissions/1745150383/) (top 15.59%)
- Priority queue: [0ms](https://leetcode.com/problems/minimum-number-of-refueling-stops/submissions/1745152549/) **(top 100.00%)**

876. [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)

- [0ms](https://leetcode.com/submissions/detail/641286453/) **(top 100.00%)**

889. [Construct Binary Tree from Preorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/)

- [0ms](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/submissions/1745153758/) **(top 100.00%)**

958. [Check Completeness of a Binary Tree](https://leetcode.com/problems/check-completeness-of-a-binary-tree/)

- [0ms](https://leetcode.com/problems/check-completeness-of-a-binary-tree/submissions/1745154406/) **(top 100.00%)**

1038. [Binary Search Tree to Greater Sum Tree](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/)

- [0ms](https://leetcode.com/submissions/detail/645347712/) **(top 100.00%)**

1838. [Frequency of the Most Frequent Element](https://leetcode.com/problems/frequency-of-the-most-frequent-element/)

- [31ms](https://leetcode.com/problems/frequency-of-the-most-frequent-element/submissions/1745155162/) (top 90.46%)
