# Progress & Steps Math Problem (C++) 📐🔢

## 📌 Overview | نظرة عامة
**English:**  
A C++ problem-solving solution using `long long` integer arithmetic and conditional checks (`if`, `else if`, `else`) to handle edge cases and compute a ceiling-style step formula based on `n`, `a`, and `b`[span_5](start_span)[span_5](end_span).

**العربية:**  
حل مسألة برمجية بلغة C++ باستخدام نوع البيانات `long long` والعمليات الحسابية والجمل الشرطية (`if`, `else if`, `else`) لمعالجة الحالات الخاصة وحساب صيغة عدد الخطوات بناءً على قيم `n` و `a` و `b`[span_6](start_span)[span_6](end_span).

---

## ⚙️ Logic & Approach | فكرة الحل
1. Read three `long long` values: `n`, `a`, and `b`[span_7](start_span)[span_7](end_span).
2. If `n <= a`, output `1`[span_8](start_span)[span_8](end_span).
3. Else if `a <= b`, output `-1`[span_9](start_span)[span_9](end_span).
4. Otherwise (`else`), compute `((n - a + a - b - 1) / (a - b)) + 1` and print the result[span_10](start_span)[span_10](end_span).

---

## 💻 Sample Input & Output | أمثلة على المدخلات والمخرجات

### Example 1
**Input:**
```text
5 4 1
```[span_11](start_span)[span_11](end_span)
**Output:**
```text
2
```[span_12](start_span)[span_12](end_span)

### Example 2
**Input:**
```text
2 2 10
```[span_13](start_span)[span_13](end_span)
**Output:**
```text
1
```[span_14](start_span)[span_14](end_span)

### Example 3
**Input:**
```text
2 1 1
```[span_15](start_span)[span_15](end_span)
**Output:**
```text
-1
```[span_16](start_span)[span_16](end_span)

---

