AI Grade Predictor in C++

This is a simple project that predicts a student's final grade using Machine Learning in C++.

It uses a small AI model (neural network) to learn from past student records.

---

How to Use

1. Run `train.cpp` to train the model
2. Run `predict.cpp` to get grade predictions

---

Requirements

- C++ compiler (g++)
- FANN library  
  Install with:  
  ```
  sudo apt install libfann-dev
  ```

---

Files

- `src/train.cpp` → trains the AI model
- `src/predict.cpp` → predicts grades
- `data/training.data` → sample training data
- `models/` → saved model (after training)

---

Example

Input:
```
Assignments: 85
Quizzes: 70
Midterms: 90
Finals: 95
```

Output:
```
Predicted Grade: 87%
🌟 Excellent! On track for an A.
```

---
