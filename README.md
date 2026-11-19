# Progress & Steps Math Problem (C++) 📐🔢

## 📌 Overview | نظرة عامة
**English:**  
A C++ problem-solving solution using `long long` integer arithmetic and conditional checks (`if`, `else if`, `else`) to handle edge cases and compute a ceiling-style step formula based on `n`, `a`, and `b`.

**العربية:**  
حل مسألة برمجية بلغة C++ باستخدام نوع البيانات `long long` والعمليات الحسابية والجمل الشرطية (`if`, `else if`, `else`) لمعالجة الحالات الخاصة وحساب صيغة عدد الخطوات بناءً على قيم `n` و `a` و `b`.

---

## ⚙️ Logic & Approach | فكرة الحل
1. Read three `long long` values: `n`, `a`, and `b`.
2. If `n <= a`, output `1`.
3. Else if `a <= b`, output `-1`.
4. Otherwise (`else`), compute `((n - a + a - b - 1) / (a - b)) + 1` and print the result.

---

## 💻 Sample Input & Output | أمثلة على المدخلات والمخرجات

### Example 1
**Input:**
```text
5 4 1

Output:
2

Example 2
Input:

2 2 10

Output:
1

Example 3
​Input:
2 1 1 

-1
