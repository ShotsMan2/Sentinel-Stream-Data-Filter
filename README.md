# Sentinel Stream Data Filter

This project implements a data processing algorithm in C that analyzes a stream of integers provided by the user. It functions as a **Conditional Filter** that aggregates statistics based on the magnitude (number of digits) of the input.

## ⚙️ Algorithm Logic

The system uses a **Sentinel-Controlled Loop** structure, meaning the iteration count is not fixed but determined by the data itself.

1.  **Input Stream:** Continuously accepts integers from the standard input.
2.  **Termination Condition:** Checks every input for the sentinel value (`-1`). If found, the data stream is considered closed.
3.  **Magnitude Analysis:**
    * Decomposes the integer using iterative division (`/ 10`).
    * Calculates the digit count: $d = \lfloor \log_{10}|x| \rfloor + 1$.
4.  **Filtering & Aggregation:**
    * **Filter:** `if (digits == 2)`
    * **Action:** Increment the global counter.

## 🚀 Usage Scenario

This logic is fundamental in systems where the amount of data is unknown beforehand (e.g., reading sensor data until a stop signal).

1.  Compile the code:
    ```bash
    gcc main.c -o data_filter
    ```
2.  Run the executable:
    ```bash
    ./data_filter
    ```
3.  Enter various numbers. To stop the analysis and see the count of 2-digit numbers, enter `-1`.

---
*This repository demonstrates while-loops, sentinel logic, and numerical analysis in C.*
